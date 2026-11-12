/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

/******************************************************************************************
 * ��vector��������ʵ�ֲ��֣���������vector.h
 * Ч����ͬ�ڽ���Щʵ��ֱ�ӻ���vector.h
 * ��export��δ��������֧��ǰ����˿ɽ�������ʵ�ַ��룬�Ա�γ̽���
 ******************************************************************************************/
#include "_share/util.h"

#include "vector_bracket.h"
#include "vector_assignment.h"

#include "vector_constructor_by_copying.h"

#include "vector_expand.h"
#include "vector_shrink.h"

#include "Vector_insert.h"
#include "vector_remove.h"
#include "vector_removeInterval.h"

#include "Vector_find.h"
#include "selection/quickselect.h"
#include "Vector_search.h"
#include "Vector_search_binary_C.h" //��A��B��C���ְ汾��C������
//#include "Vector_search_fibonaccian_A.h" //ʵ�ð棨������ֵ�д���ӿ�ͳһ��
#include "Vector_search_fibonaccian_B.h" //������

#include "Vector_traverse.h"

#include "Vector_unsort.h"
#include "Vector_sort.h"
//#include "vector_bubbleSort_A.h"
//#include "vector_bubbleSort_B.h"
#include "vector_bubbleSort_C.h"
#include "vector_selectionSort.h"
#include "vector_merge.h"
#include "vector_mergeSort.h"
#include "vector_partition_LUG.h"
//#include "vector_partition_DUP.h"
//#include "vector_partition_LGU.h"
#include "vector_heapSort.h"
//#include "vector_quickSort_recursive.h"
#include "vector_quickSort_iterative.h"
#include "vector_shellSort.h"

#include "Vector_uniquify.h" //����Vector_uniquify_slow.h
#include "Vector_deduplicate.h"
