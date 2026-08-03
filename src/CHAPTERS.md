# 邓俊辉《数据结构（C++语言版）·第3版》章节—项目索引

> 本文件按教材章节组织 `src/` 下的 63 个项目。项目构建系统已从 VS2019 `.vcxproj` 迁移至 CMake。
> 打开方式：在仓库根目录执行 `cmake --preset debug` 生成 `build/dsacpp.sln`，用 Visual Studio 打开该 `.sln`；解决方案资源管理器中各目标已按章节归入 `ch01_Introduction` … `ch12_Sorting` 文件夹（见 `src/CMakeLists.txt` 末尾的 FOLDER 设置）。右键某目标 →「设为启动项目」→ F5 调试。
> 下表「工程文件」列仍为迁移前的 `.vcxproj` 名称，仅作历史参考；现以 CMake target 名为准。部分「目录名」与「target 名 / 旧工程名」不一致，例如 `PQ_ComplHeap/`→target `PQ_BinHeap`、`nest_recursive/`→target `paren_recursive`、`countOnes/`→target `countones`、`fibonacci/`→target `Fibonacci`，详见 `src/CMakeLists.txt`。

---

## 第 1 章　绪论（Introduction）

算法分析示例与习题。本章项目多为独立的小型算法演示，用于理解复杂度、递归、分治、减治、动态规划等基本方法。

| 项目 | 说明 | 工程文件 |
|---|---|---|
| countOnes | 统计二进制数中 1 的个数（popcount） | [countones.vcxproj](./countOnes/countones.vcxproj) |
| sum | 数组求和（递归 / 迭代） | [sum.vcxproj](./sum/sum.vcxproj) |
| factorial | 阶乘 | [factorial.vcxproj](./factorial/factorial.vcxproj) |
| fibonacci | 斐波那契（递归 / 迭代 / 矩阵快速幂） | [Fibonacci.vcxproj](./fibonacci/Fibonacci.vcxproj) |
| gcd | 最大公约数（欧几里得） | [gcd.vcxproj](./gcd/gcd.vcxproj) |
| power | 快速幂 | [power.vcxproj](./power/power.vcxproj) |
| hanoi | 汉诺塔 | [hanoi.vcxproj](./hanoi/hanoi.vcxproj) |
| greatest_slice | 最大切片（最大子段和） | [greatest_slice.vcxproj](./greatest_slice/greatest_slice.vcxproj) |
| majority | 众数（减治） | [majority.vcxproj](./majority/majority.vcxproj) |
| median1 | 中位数（线性选择，版本 1） | [median1.vcxproj](./median1/median1.vcxproj) |
| median2 | 中位数（线性选择，版本 2） | [median2.vcxproj](./median2/median2.vcxproj) |
| shiftK | 循环移位 k 位 | [shiftK.vcxproj](./shiftK/shiftK.vcxproj) |
| maxRect | 最大矩形 | [maxRect.vcxproj](./maxRect/maxRect.vcxproj) |
| prime | 素数判定 / 筛法 | [prime.vcxproj](./prime/prime.vcxproj) |
| lcs | 最长公共子序列（动态规划） | [lcs.vcxproj](./lcs/lcs.vcxproj) |
| daxue | 《大学》文本处理示例 | [daxue.vcxproj](./daxue/daxue.vcxproj) |
| simu | 模拟示例 | [simu.vcxproj](./simu/simu.vcxproj) |

---

## 第 2 章　向量（Vector）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| vector | 向量模板类 | [vector.vcxproj](./vector/vector.vcxproj) |
| BitMap | 位图（向量应用） | [bitmap.vcxproj](./BitMap/bitmap.vcxproj) |
| BitMap_hopcroft | 位图（Hopcroft 优化） | [bitmap.hopcroft.vcxproj](./BitMap_hopcroft/bitmap.hopcroft.vcxproj) |
| Bitmap_set_only | 位图（仅 set 操作） | [Bitmap_set_only.vcxproj](./Bitmap_set_only/Bitmap_set_only.vcxproj) |

---

## 第 3 章　列表（List）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| list | 列表（双向链表）模板类 | [list.vcxproj](./list/list.vcxproj) |
| cursor_list | 游标式列表（无指针实现） | [cursor_list.vcxproj](./cursor_list/cursor_list.vcxproj) |

---

## 第 4 章　栈与队列（Stack & Queue）

栈既可基于向量、也可基于列表实现，故有 `stack_vector` / `stack_list` 两个版本。本章还含若干栈/队列的典型应用。

| 项目 | 说明 | 工程文件 |
|---|---|---|
| stack_vector | 栈（基于 Vector 实现） | [stack_vector.vcxproj](./stack_vector/stack_vector.vcxproj) |
| stack_list | 栈（基于 List 实现） | [stack_list.vcxproj](./stack_list/stack_list.vcxproj) |
| queue | 队列 | [queue.vcxproj](./queue/queue.vcxproj) |
| conversion | 进制转换（栈应用） | [conversion.vcxproj](./conversion/conversion.vcxproj) |
| conversion_recursive | 进制转换（递归） | [conversion_recursive.vcxproj](./conversion_recursive/conversion_recursive.vcxproj) |
| rpn | 逆波兰表达式求值（栈应用） | [rpn.vcxproj](./rpn/rpn.vcxproj) |
| nest_recursive | 括号匹配（递归） | [paren_recursive.vcxproj](./nest_recursive/paren_recursive.vcxproj) |
| nest_stack | 括号匹配（栈） | [paren_stack.vcxproj](./nest_stack/paren_stack.vcxproj) |
| laby | 迷宫寻径（栈应用） | [laby.vcxproj](./laby/laby.vcxproj) |
| queen_brute_force_1 | 八皇后（暴力 1） | [queen_brute_force_1.vcxproj](./queen_brute_force_1/queen_brute_force_1.vcxproj) |
| queen_brute_force_2 | 八皇后（暴力 2） | [queen_brute_force_2.vcxproj](./queen_brute_force_2/queen_brute_force_2.vcxproj) |
| queen_recursive | 八皇后（递归 / 回溯） | [queen_recursive.vcxproj](./queen_recursive/queen_recursive.vcxproj) |
| queen_stack | 八皇后（栈式回溯） | [queen_stack.vcxproj](./queen_stack/queen_stack.vcxproj) |

---

## 第 5 章　二叉树（Binary Tree）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| binTree | 二叉树模板类 | [binTree.vcxproj](./binTree/binTree.vcxproj) |

---

## 第 6 章　图（Graph）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| graphmatrix | 图（邻接矩阵实现，含 BFS / DFS / Dijkstra / Prim / 拓扑排序） | [graphMatrix.vcxproj](./graphmatrix/graphMatrix.vcxproj) |

---

## 第 7 章　搜索树（Search Tree）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| BST | 二叉搜索树 | [BST.vcxproj](./BST/BST.vcxproj) |
| AVL | AVL 树（平衡） | [AVL.vcxproj](./AVL/AVL.vcxproj) |
| splay | 伸展树 | [Splay.vcxproj](./splay/Splay.vcxproj) |
| redBlack | 红黑树 | [RedBlack.vcxproj](./redBlack/RedBlack.vcxproj) |

---

## 第 8 章　高级搜索树（Advanced Search Tree）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| BTree | B-树 | [BTree.vcxproj](./BTree/BTree.vcxproj) |

---

## 第 9 章　词典（Dictionary）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| hashtable | 散列表（哈希表） | [hashtable.vcxproj](./hashtable/hashtable.vcxproj) |
| skiplist | 跳表 | [skiplist.vcxproj](./skiplist/skiplist.vcxproj) |

---

## 第 10 章　优先队列（Priority Queue）

含三种底层实现及 Huffman 编码应用；Huffman 项目分别用不同优先队列实现以作对比。

| 项目 | 说明 | 工程文件 |
|---|---|---|
| PQ_ComplHeap | 完全二叉堆 | [PQ_BinHeap.vcxproj](./PQ_ComplHeap/PQ_BinHeap.vcxproj) |
| PQ_leftheap | 左式堆 | [PQ_leftHeap.vcxproj](./PQ_leftheap/PQ_leftHeap.vcxproj) |
| PQ_List | 列表实现的优先队列 | [PQ_List.vcxproj](./PQ_List/PQ_List.vcxproj) |
| SMMH | 对称 Min-Max 堆 | [SMMH.vcxproj](./SMMH/SMMH.vcxproj) |
| huffman | Huffman 编码 | [huffman.vcxproj](./huffman/huffman.vcxproj) |
| Huffman_PQ_ComplHeap | Huffman（用完全二叉堆） | [Huffman_PQ_ComplHeap.vcxproj](./Huffman_PQ_ComplHeap/Huffman_PQ_ComplHeap.vcxproj) |
| Huffman_PQ_LeftHeap | Huffman（用左式堆） | [Huffman_PQ_LeftHeap.vcxproj](./Huffman_PQ_LeftHeap/Huffman_PQ_LeftHeap.vcxproj) |
| Huffman_PQ_List | Huffman（用列表 PQ） | [Huffman_PQ_List.vcxproj](./Huffman_PQ_List/Huffman_PQ_List.vcxproj) |

---

## 第 11 章　串（String）

字符串模式匹配的各类算法，按教材顺序由暴力到 KMP、BM、KR。

| 项目 | 说明 | 工程文件 |
|---|---|---|
| string_pm_bf1 | 暴力匹配（版本 1） | [string_pm_bf1.vcxproj](./string_pm_bf1/string_pm_bf1.vcxproj) |
| string_pm_bf2 | 暴力匹配（版本 2） | [string_pm_bf2.vcxproj](./string_pm_bf2/string_pm_bf2.vcxproj) |
| string_pm_kmp | KMP 算法 | [string_pm_kmp.vcxproj](./string_pm_kmp/string_pm_kmp.vcxproj) |
| string_pm_kmp_improved | KMP 改进版 | [string_pm_kmp_improved.vcxproj](./string_pm_kmp_improved/string_pm_kmp_improved.vcxproj) |
| string_pm_bm_bc | BM 算法（坏字符表） | [string_pm_bm_bc.vcxproj](./string_pm_bm_bc/string_pm_bm_bc.vcxproj) |
| string_pm_bm_bc+gs | BM 算法（坏字符 + 好后缀） | [string_pm_bm_bc+gs.vcxproj](./string_pm_bm_bc%2Bgs/string_pm_bm_bc%2Bgs.vcxproj) |
| string_pm_kr | Karp-Rabin 哈希匹配 | [string_pm_kr.vcxproj](./string_pm_kr/string_pm_kr.vcxproj) |

---

## 第 12 章　排序（Sorting）

| 项目 | 说明 | 工程文件 |
|---|---|---|
| bubblesort | 冒泡排序 | [bubblesort.vcxproj](./bubblesort/bubblesort.vcxproj) |
| selection | 选择排序 | [selection.vcxproj](./selection/selection.vcxproj) |
| sorter | 排序器综合（归并 / 快排 / 堆排等） | [sorter.vcxproj](./sorter/sorter.vcxproj) |

---

## 附：公共组件（非章节项目）

这些目录不对应单一章节，而是被各项目共享引用的基础设施。

| 目录 | 说明 |
|---|---|
| [`_share/`](./_share) | 共享辅助头文件：`release.h` / `util.h` / `rand.h` 等测试与工具函数 |
| [`UniPrint/`](./UniPrint) | 统一打印输出框架，支持各数据结构的可视化 |
| [`_pl/`](./_pl) | Perl 语言对照示例 |
| [`_ps/`](./_ps) | PostScript 对照示例 |
| [`_py/`](./_py) | Python 对照示例 |
| [`_rb/`](./_rb) | Ruby 对照示例 |

---

### 备注

- 项目总数：63 个 `.vcxproj`，统一纳入 [`dsacpp.sln`](./dsacpp.sln)（VS2019）。
- 测试数据：图、Huffman、迷宫等项目的输入见仓库根目录的 [`../_input/`](../_input)，输出见 [`../_output/`](../_output)。
- 个别项目（如绪论中的习题）在不同印刷批次教材中所属小节可能略有出入，但目录名即主题名，可按书目录快速定位。
