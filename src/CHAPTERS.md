# 邓俊辉《数据结构（C++语言版）·第3版》章节—项目索引

> 本文件按教材章节组织 63 个 CMake 项目。源码位于 `src/ch01/` … `src/ch12/`，章节文档按 `docs/chNN/` 归档。
> 开发方式：直接在 IDE 中打开仓库根目录的 CMake 项目。每章和每个项目均有独立的 `CMakeLists.txt`；可在 IDE 中选择任一项目 target 构建和调试。
> 下表列出项目目录名；目录名与 CMake target 名可能不同，例如 `countOnes/`→`countones`、`fibonacci/`→`Fibonacci`、`PQ_ComplHeap/`→`PQ_BinHeap`、`nest_recursive/`→`paren_recursive`。target 定义位于各项目目录下的 `CMakeLists.txt`。

---

## 第 1 章　绪论（Introduction）

算法分析示例与习题。本章项目多为独立的小型算法演示，用于理解复杂度、递归、分治、减治、动态规划等基本方法。

| 项目 | 说明 | 项目目录 |
|---|---|---|
| countOnes | 统计二进制数中 1 的个数（popcount） | [countOnes](./ch01/countOnes) |
| sum | 数组求和（递归 / 迭代） | [sum](./ch01/sum) |
| factorial | 阶乘 | [factorial](./ch01/factorial) |
| fibonacci | 斐波那契（递归 / 迭代 / 矩阵快速幂） | [fibonacci](./ch01/fibonacci) |
| gcd | 最大公约数（欧几里得） | [gcd](./ch01/gcd) |
| power | 快速幂 | [power](./ch01/power) |
| hanoi | 汉诺塔 | [hanoi](./ch01/hanoi) |
| greatest_slice | 最大切片（最大子段和） | [greatest_slice](./ch01/greatest_slice) |
| majority | 众数（减治） | [majority](./ch01/majority) |
| median1 | 中位数（线性选择，版本 1） | [median1](./ch01/median1) |
| median2 | 中位数（线性选择，版本 2） | [median2](./ch01/median2) |
| shiftK | 循环移位 k 位 | [shiftK](./ch01/shiftK) |
| maxRect | 最大矩形 | [maxRect](./ch01/maxRect) |
| prime | 素数判定 / 筛法 | [prime](./ch01/prime) |
| lcs | 最长公共子序列（动态规划） | [lcs](./ch01/lcs) |
| daxue | 《大学》文本处理示例 | [daxue](./ch01/daxue) |
| simu | 模拟示例 | [simu](./ch01/simu) |

---

## 第 2 章　向量（Vector）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| vector | 向量模板类 | [vector](./ch02/vector) |
| BitMap | 位图（向量应用） | [BitMap](./ch02/BitMap) |
| BitMap_hopcroft | 位图（Hopcroft 优化） | [BitMap_hopcroft](./ch02/BitMap_hopcroft) |
| Bitmap_set_only | 位图（仅 set 操作） | [Bitmap_set_only](./ch02/Bitmap_set_only) |

---

## 第 3 章　列表（List）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| list | 列表（双向链表）模板类 | [list](./ch03/list) |
| cursor_list | 游标式列表（无指针实现） | [cursor_list](./ch03/cursor_list) |

---

## 第 4 章　栈与队列（Stack & Queue）

栈既可基于向量、也可基于列表实现，故有 `stack_vector` / `stack_list` 两个版本。本章还含若干栈/队列的典型应用。

| 项目 | 说明 | 项目目录 |
|---|---|---|
| stack_vector | 栈（基于 Vector 实现） | [stack_vector](./ch04/stack_vector) |
| stack_list | 栈（基于 List 实现） | [stack_list](./ch04/stack_list) |
| queue | 队列 | [queue](./ch04/queue) |
| conversion | 进制转换（栈应用） | [conversion](./ch04/conversion) |
| conversion_recursive | 进制转换（递归） | [conversion_recursive](./ch04/conversion_recursive) |
| rpn | 逆波兰表达式求值（栈应用） | [rpn](./ch04/rpn) |
| nest_recursive | 括号匹配（递归） | [nest_recursive](./ch04/nest_recursive) |
| nest_stack | 括号匹配（栈） | [nest_stack](./ch04/nest_stack) |
| laby | 迷宫寻径（栈应用） | [laby](./ch04/laby) |
| queen_brute_force_1 | 八皇后（暴力 1） | [queen_brute_force_1](./ch04/queen_brute_force_1) |
| queen_brute_force_2 | 八皇后（暴力 2） | [queen_brute_force_2](./ch04/queen_brute_force_2) |
| queen_recursive | 八皇后（递归 / 回溯） | [queen_recursive](./ch04/queen_recursive) |
| queen_stack | 八皇后（栈式回溯） | [queen_stack](./ch04/queen_stack) |

---

## 第 5 章　二叉树（Binary Tree）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| binTree | 二叉树模板类 | [binTree](./ch05/binTree) |

---

## 第 6 章　图（Graph）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| graphmatrix | 图（邻接矩阵实现，含 BFS / DFS / Dijkstra / Prim / 拓扑排序） | [graphmatrix](./ch06/graphmatrix) |

---

## 第 7 章　搜索树（Search Tree）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| BST | 二叉搜索树 | [BST](./ch07/BST) |
| AVL | AVL 树（平衡） | [AVL](./ch07/AVL) |
| splay | 伸展树 | [splay](./ch07/splay) |
| redBlack | 红黑树 | [redBlack](./ch07/redBlack) |

---

## 第 8 章　高级搜索树（Advanced Search Tree）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| BTree | B-树 | [BTree](./ch08/BTree) |

---

## 第 9 章　词典（Dictionary）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| hashtable | 散列表（哈希表） | [hashtable](./ch09/hashtable) |
| skiplist | 跳表 | [skiplist](./ch09/skiplist) |

---

## 第 10 章　优先队列（Priority Queue）

含三种底层实现及 Huffman 编码应用；Huffman 项目分别用不同优先队列实现以作对比。

| 项目 | 说明 | 项目目录 |
|---|---|---|
| PQ_ComplHeap | 完全二叉堆 | [PQ_ComplHeap](./ch10/PQ_ComplHeap) |
| PQ_leftheap | 左式堆 | [PQ_leftheap](./ch10/PQ_leftheap) |
| PQ_List | 列表实现的优先队列 | [PQ_List](./ch10/PQ_List) |
| SMMH | 对称 Min-Max 堆 | [SMMH](./ch10/SMMH) |
| huffman | Huffman 编码 | [huffman](./ch10/huffman) |
| Huffman_PQ_ComplHeap | Huffman（用完全二叉堆） | [Huffman_PQ_ComplHeap](./ch10/Huffman_PQ_ComplHeap) |
| Huffman_PQ_LeftHeap | Huffman（用左式堆） | [Huffman_PQ_LeftHeap](./ch10/Huffman_PQ_LeftHeap) |
| Huffman_PQ_List | Huffman（用列表 PQ） | [Huffman_PQ_List](./ch10/Huffman_PQ_List) |

---

## 第 11 章　串（String）

字符串模式匹配的各类算法，按教材顺序由暴力到 KMP、BM、KR。

| 项目 | 说明 | 项目目录 |
|---|---|---|
| string_pm_bf1 | 暴力匹配（版本 1） | [string_pm_bf1](./ch11/string_pm_bf1) |
| string_pm_bf2 | 暴力匹配（版本 2） | [string_pm_bf2](./ch11/string_pm_bf2) |
| string_pm_kmp | KMP 算法 | [string_pm_kmp](./ch11/string_pm_kmp) |
| string_pm_kmp_improved | KMP 改进版 | [string_pm_kmp_improved](./ch11/string_pm_kmp_improved) |
| string_pm_bm_bc | BM 算法（坏字符表） | [string_pm_bm_bc](./ch11/string_pm_bm_bc) |
| string_pm_bm_bc+gs | BM 算法（坏字符 + 好后缀） | [string_pm_bm_bc+gs](./ch11/string_pm_bm_bc+gs) |
| string_pm_kr | Karp-Rabin 哈希匹配 | [string_pm_kr](./ch11/string_pm_kr) |

---

## 第 12 章　排序（Sorting）

| 项目 | 说明 | 项目目录 |
|---|---|---|
| bubblesort | 冒泡排序 | [bubblesort](./ch12/bubblesort) |
| selection | 选择排序 | [selection](./ch12/selection) |
| sorter | 排序器综合（归并 / 快排 / 堆排等） | [sorter](./ch12/sorter) |

---

## 附：公共组件（非章节项目）

这些目录不对应单一章节，而是被各项目共享引用的基础设施。

| 目录 | 说明 |
|---|---|
| [`common/_share/`](./common/_share) | 共享辅助头文件：`release.h` / `util.h` / `rand.h` 等测试与工具函数 |
| [`common/UniPrint/`](./common/UniPrint) | 统一打印输出框架，支持各数据结构的可视化 |
| [`examples/_pl/`](./examples/_pl) | Perl 语言对照示例 |
| [`examples/_ps/`](./examples/_ps) | PostScript 对照示例 |
| [`examples/_py/`](./examples/_py) | Python 对照示例 |
| [`examples/_rb/`](./examples/_rb) | Ruby 对照示例 |

---

### 备注

- 项目总数：63 个 CMake executable target，按章节分别定义在项目目录中。
- 测试数据：图、Huffman、迷宫等项目的输入见仓库根目录的 [`../_input/`](../_input)，输出见 [`../_output/`](../_output)。
- 个别项目（如绪论中的习题）在不同印刷批次教材中所属小节可能略有出入，但目录名即主题名，可按书目录快速定位。
