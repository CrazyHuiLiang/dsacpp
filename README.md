# 邓俊辉《数据结构（C++语言版）·第3版》配套源码

清华大学邓俊辉教授《数据结构（C++语言版）》（ISBN 7-302-33064-6 / 7-302-33065-3 / 7-302-29652-2 / 7-302-26883-3）课程配套源代码，使用 **CMake** 构建。

> 版权：Copyright (c) 2003-2024, Junhui DENG (deng@tsinghua.edu.cn), 清华大学计算机科学与技术系。

---

## 一、快速开始

```bash
# 1. 在 IDE 中直接打开仓库根目录的 CMake 项目，或配置构建目录
cmake -S . -B build

# 2. 编译指定项目（63 个独立项目之一）
cmake --build build --config Debug --target vector

# 3. 一次性编译全部 63 个项目
cmake --build build
```

直接在 IDE 中打开仓库根目录（包含顶层 `CMakeLists.txt`）即可加载整个项目；无需打开单独的解决方案文件。

> 共 **63 个独立可执行项目**，每个项目各有 `main.cpp` 入口，**不是整体编译出一个程序**。

---

## 二、目录结构

```
dsacpp/
├── CMakeLists.txt     ← CMake 顶层配置
├── README.md          ← 本文件
├── src/               ← 全部源码
│   ├── CMakeLists.txt ← 挂载各章节
│   ├── CHAPTERS.md    ← 章节—项目索引
│   ├── ch01/ … ch12/  ← 章节目录，每章含 CMakeLists.txt
│   │   └── <项目>/    ← 项目源码和项目级 CMakeLists.txt
│   ├── common/        ← 多项目共享的 C++ 支撑代码
│   └── examples/      ← Perl / PostScript / Python / Ruby 对照示例
├── docs/              ← 按 ch01 … ch12 存放章节资料
├── build/             ← CMake 构建输出（自动生成，不入库）
├── _executable/       ← 编译产物（按 Debug/Release 分目录）
├── _input/            ← 测试输入数据
└── _output/           ← 运行输出
```

每个项目子目录的典型结构（以 `src/ch03/list/` 为例）：

```
list/
├── CMakeLists.txt            ← 项目构建配置
├── main.cpp                  ← 测试入口（含 main 函数）
├── list.h                    ← 类定义
├── list_implementation.h     ← 实现汇总
├── listNode.h                ← 节点定义
├── list_*.h                  ← 各成员函数分文件实现（头文件模块化）
└── list_test.h               ← 测试框架
```

代码采用**头文件模块化**风格：类实现拆散在多个 `.h` 文件中，编译时通过 `#include` 汇总。

---

## 三、章节 ↔ 项目对照

完整的「章节—项目」索引见 **[`src/CHAPTERS.md`](./src/CHAPTERS.md)**。各项目目录位于对应的 `src/chNN/` 下。概览如下：

| 教材章节 | 主题 | 代表项目 |
|---|---|---|
| 第 1 章 绪论 | 算法分析示例与习题 | `countOnes` `sum` `fibonacci` `gcd` `power` `hanoi` `majority` `median` `lcs` ... |
| 第 2 章 向量 | Vector | `vector` `BitMap` |
| 第 3 章 列表 | List | `list` `cursor_list` |
| 第 4 章 栈与队列 | Stack / Queue | `stack_vector` `stack_list` `queue` `rpn` `laby` `queen_*` |
| 第 5 章 二叉树 | Binary Tree | `binTree` |
| 第 6 章 图 | Graph | `graphmatrix`（BFS/DFS/Dijkstra/Prim/拓扑排序） |
| 第 7 章 搜索树 | BST / AVL / Splay / 红黑树 | `BST` `AVL` `splay` `redBlack` |
| 第 8 章 高级搜索树 | B-树 | `BTree` |
| 第 9 章 词典 | 散列表 / 跳表 | `hashtable` `skiplist` |
| 第 10 章 优先队列 | PQ / Huffman | `PQ_ComplHeap` `PQ_leftheap` `PQ_List` `SMMH` `huffman*` |
| 第 11 章 串 | 字符串模式匹配 | `string_pm_bf1/bf2` `string_pm_kmp` `string_pm_bm_bc` `string_pm_kr` |
| 第 12 章 排序 | Sorting | `bubblesort` `selection` `sorter` |

---

## 四、命名约定

- **基础数据结构**：小写单词，如 `vector` / `list` / `stack` / `queue` / `graph`。
- **同一结构的多种实现**：下划线后缀区分底层，如 `stack_vector`（栈基于向量）与 `stack_list`（栈基于列表）。
- **专有名词**：保留大小写，如 `AVL` / `BST` / `BTree` / `PQ` / `SMMH`。
- **算法族变体**：`string_pm_kmp` / `string_pm_kmp_improved` / `string_pm_bm_bc` / `string_pm_bm_bc+gs`。
- **应用对比**：`Huffman_PQ_ComplHeap` / `Huffman_PQ_LeftHeap` / `Huffman_PQ_List` 表示用不同优先队列实现 Huffman 编码。
- 共享 C++ 支撑代码位于 `src/common/`；其他语言对照示例位于 `src/examples/`，不参与 C++ 构建。

---

## 五、调试提示

- 多数 `main.cpp` 通过命令行参数控制测试规模（如元素个数 `n`）。无参数时通常使用默认规模。
- 需要输入数据的项目（图、Huffman、迷宫等）从 [`_input/`](./_input) 读取，运行结果写入 [`_output/`](./_output)。
- `src/common/` 中的共享代码由各项目复用；项目 CMake 只列出 `.cpp` 源文件，头文件由编译器根据 `#include` 自动处理。

---

## 六、学习路径建议

按教材章节顺序推进，每读一章就编译运行对应项目、观察输出：

```
向量 → 列表 → 栈与队列 → 二叉树 → 图 → 搜索树 → 高级搜索树 → 词典 → 优先队列 → 串 → 排序
```

绪论章的小算法项目可作为复杂度分析的练手，随时穿插。
