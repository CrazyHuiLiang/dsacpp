---
name: vs-to-cmake-conversion
overview: 将 dsacpp 项目中 63 个 VS2019 vcxproj 独立可执行文件项目转换为 CMake 构建系统，统一管理编译选项、include 路径和预处理器宏，并删除旧的 sln/vcxproj 文件。
---

<zl version="1.0" lang="zh-CN">
<plan_result>
<req>

## 用户需求

将 dsacpp 项目从 VS2019 的 63 个 vcxproj/sln 工程转换为统一的 CMake 构建系统。用户使用 VS2026 打开旧工程时反复遇到编译错误：缺少 include 路径导致 `_share/util.h` 和 `huffman/huffChar.h` 找不到；缺少预处理器宏 `DSA_STACK_LIST` 导致 `Stack` 类型未声明。这些问题源于 63 个 vcxproj 的 Debug 配置普遍缺失，手动逐个修复工作量太大。

## 产品概述

用一个顶层 CMakeLists.txt 加一个 src/CMakeLists.txt 替代 63 个 vcxproj + 1 个 sln 文件，统一管理编译选项，支持 Debug/Release 双配置，可被 VS2026、CLion、VSCode 等任意 IDE 直接打开。

## 核心功能

- 顶层 CMakeLists.txt：设置 C++ 标准（C++11）、全局编译选项、输出目录
- src/CMakeLists.txt：为 63 个子项目各创建 `add_executable` 目标，自动注入正确的 include 路径和预处理器宏
- Debug/Release 双配置一致性：每种宏在 Debug 和 Release 下都定义，不再遗漏
- 输出目录与原项目一致（`_executable/` 下按配置和项目名分目录）
- 保留原有 vcxproj/sln 文件不动（后续可视情况手动删除）
</req>

<tech>

## 技术方案

### 实现策略

通过 Python 脚本解析已提取的 `_vcxproj_analysis.json`（63 个项目完整配置），自动生成 `src/CMakeLists.txt`，确保每个 `add_executable` 目标的源文件列表和预处理器宏与原 Release 配置完全一致，并同时修复 Debug 配置的缺失。

### 关键设计决策

1. **统一 Debug/Release 宏定义**：原项目 Debug 和 Release 的预处理器宏不一致（Debug 缺少 `DSA_STACK_*` 等），CMake 中使用 `target_compile_definitions` 配合生成器表达式 `$<$<CONFIG:Debug>:_DEBUG>;$<$<CONFIG:Release>:NDEBUG>` 实现统一管理，公共宏两配置都享有。

2. **源文件引用解析**：原项目通过 `../UniPrint/print_basic.cpp` 等相对路径跨目录引用源文件。CMake 中 `CMAKE_CURRENT_SOURCE_DIR` 设为 `src/`，`add_executable` 中的路径以 `${CMAKE_CURRENT_SOURCE_DIR}/` 为前缀加上原路径名即可正确解析。

3. **Include 路径**：所有项目都需要 `target_include_directories(XXX PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})`，即 `src/` 目录。这保证了 `#include "_share/util.h"` → `src/_share/util.h` 等路径的正确解析。

4. **不引入库目标**：由于原项目没有任何 ProjectReference（没有 lib），且每个 `add_executable` 直接编译所需的所有 .cpp 文件（已通过 `../` 路径引用），因此不需要创建 OBJECT/STATIC library，直接编译即可。

### 目录结构

```
dsacpp/
├── CMakeLists.txt              # [NEW] 顶层：project()、C++标准、全局选项
├── src/
│   └── CMakeLists.txt          # [NEW] 所有 63 个 add_executable 目标
├── _vcxproj_analysis.json      # [已存在] 63 个项目配置快照（脚本输入数据）
├── _input/                     # [不变] 测试数据
├── _output/                    # [不变] 输出数据
│   # 以下为已有 vcxproj/sln，保留不删：
├── src/*.vcxproj               # [保留] 原 VS 工程文件
├── src/dsacpp.sln              # [保留] 原解决方案文件
└── _executable/                # [不变] 编译产物输出目录
```

### 实现细节

#### CMakeLists.txt（顶层）

- `cmake_minimum_required(VERSION 3.16)`
- `project(dsacpp LANGUAGES CXX)`
- 设置 `CMAKE_CXX_STANDARD 11`、`CMAKE_CXX_STANDARD_REQUIRED ON`
- 设置输出目录前缀 `CMAKE_RUNTIME_OUTPUT_DIRECTORY` 到 `_executable/`
- `add_subdirectory(src)`

#### src/CMakeLists.txt（63 个项目）

通过 `_vcxproj_analysis.json` 的数据，为每个项目生成：

```
add_executable(vector
    ${CMAKE_CURRENT_SOURCE_DIR}/vector/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/UniPrint/print_basic.cpp
)
target_include_directories(vector PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(vector PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    WIN32
    _CONSOLE
    DSA_STACK_LIST
    DSA_PQ_COMPLHEAP
)
```

#### 预处理器宏汇总表（按目标）

| 宏名称 | 适用目标 |
| --- | --- |
| `DSA_STACK_LIST` | vector, BTree, conversion, cursor_list, graphMatrix, huffman(Release), Huffman_PQ_ComplHeap, laby, majority, maxRect, median2, paren_stack, PQ_leftHeap, queue, rpn, selection, sorter, Splay, stack_list 等约 20 个项目 |
| `DSA_STACK_VECTOR` | binTree, BST, conversion_recursive, hanoi, huffman(Debug), Huffman_PQ_LeftHeap, Huffman_PQ_List, list, median1, paren_recursive, PQ_BinHeap, PQ_List, queen_stack, RedBlack, skiplist, SMMH, stack_vector 等约 18 个项目 |
| `DSA_PQ_COMPLHEAP` | vector, Huffman_PQ_ComplHeap, PQ_BinHeap |
| `DSA_PQ_LEFTHEAP` | Huffman_PQ_LeftHeap, PQ_leftHeap |
| `DSA_PQ_LIST` | Huffman_PQ_List, PQ_List |
| `DSA_AVL` | AVL |
| `DSA_REDBLACK` | RedBlack |
| `DSA_HUFFMAN` | huffman, Huffman_PQ_ComplHeap, Huffman_PQ_LeftHeap, Huffman_PQ_List |
| `DSA_DEBUG` | BST (仅 Debug) |
| `DSA_DEPQ_SMMH` | SMMH |
| `STACK_ELEM_TYPE_CHAR` | paren_recursive |
| `LLIST_ELEM_TYPE_CHAR` | paren_stack |
| `LLIST_TYPE_DOUBLYLINKEDLIST` | paren_stack |


</tech>

<todolist>
<item id="create-root-cmake" deps="">创建顶层 CMakeLists.txt：设置项目名、C++11 标准、输出目录、add_subdirectory(src)</item>
<item id="generate-src-cmake" deps="create-root-cmake">基于 _vcxproj_analysis.json 用 Python 脚本批量生成 src/CMakeLists.txt，为 63 个项目各创建 add_executable 目标，注入正确的 include 路径和预处理器宏</item>
<item id="build-verify" deps="generate-src-cmake">用 CMake 配置并构建 3-5 个代表性项目（vector、huffman、AVL、list），验证 Debug 和 Release 两种配置均编译通过</item>
<item id="add-readme" deps="build-verify">在 README.md 中补充 CMake 构建说明（配置、构建、切换配置的命令示例）</item>
</todolist>
</plan_result>
</zl>