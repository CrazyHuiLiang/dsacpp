# ============================================================
# Auto-generated from _vcxproj_analysis.json
# 63 executable targets, one per DSA chapter/exercise
# ============================================================

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# ---- Build Targets ----

# ---- AVL (AVL) ----
add_executable(AVL
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/AVL/main.cpp
    ${SRC_DIR}/AVL/AVL.h
    ${SRC_DIR}/AVL/AVL_Insert.h
    ${SRC_DIR}/AVL/AVL_implementation.h
    ${SRC_DIR}/AVL/AVL_macro.h
    ${SRC_DIR}/AVL/AVL_remove.h
    ${SRC_DIR}/AVL/AVL_test.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(AVL PRIVATE ${SRC_DIR})
target_compile_definitions(AVL PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_AVL
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(AVL PRIVATE /EHsc /wd4996)
endif()

# ---- binTree (binTree) ----
add_executable(binTree
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/binTree/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/binTree/BinNode.h
    ${SRC_DIR}/binTree/BinNode_TravInorder_I1.h
    ${SRC_DIR}/binTree/BinNode_TravInorder_I2.h
    ${SRC_DIR}/binTree/BinNode_TravInorder_I3.h
    ${SRC_DIR}/binTree/BinNode_TravInorder_I4.h
    ${SRC_DIR}/binTree/BinNode_TravPreorder_I1.h
    ${SRC_DIR}/binTree/BinNode_TravPreorder_I2.h
    ${SRC_DIR}/binTree/BinNode_attach.h
    ${SRC_DIR}/binTree/BinNode_implementation.h
    ${SRC_DIR}/binTree/BinNode_insert.h
    ${SRC_DIR}/binTree/BinNode_macro.h
    ${SRC_DIR}/binTree/BinNode_macro_AVL.h
    ${SRC_DIR}/binTree/BinNode_macro_BASIC.h
    ${SRC_DIR}/binTree/BinNode_macro_RedBlack.h
    ${SRC_DIR}/binTree/BinNode_size.h
    ${SRC_DIR}/binTree/BinNode_stretchByZag.h
    ${SRC_DIR}/binTree/BinNode_stretchByZig.h
    ${SRC_DIR}/binTree/BinNode_succ.h
    ${SRC_DIR}/binTree/BinNode_travInorder.h
    ${SRC_DIR}/binTree/BinNode_travInorder_R.h
    ${SRC_DIR}/binTree/BinNode_travLevel.h
    ${SRC_DIR}/binTree/BinNode_travPostorder.h
    ${SRC_DIR}/binTree/BinNode_travPostorder_I.h
    ${SRC_DIR}/binTree/BinNode_travPostorder_R.h
    ${SRC_DIR}/binTree/BinNode_travPreorder.h
    ${SRC_DIR}/binTree/BinNode_travPreorder_R.h
    ${SRC_DIR}/binTree/BinNode_zag.h
    ${SRC_DIR}/binTree/BinNode_zig.h
    ${SRC_DIR}/binTree/BinTree.h
    ${SRC_DIR}/binTree/BinTree_attach.h
    ${SRC_DIR}/binTree/BinTree_copy.h
    ${SRC_DIR}/binTree/BinTree_implementation.h
    ${SRC_DIR}/binTree/BinTree_insert.h
    ${SRC_DIR}/binTree/BinTree_remove.h
    ${SRC_DIR}/binTree/BinTree_secede.h
    ${SRC_DIR}/binTree/BinTree_test.h
    ${SRC_DIR}/binTree/BinTree_updateHeight.h
)
target_include_directories(binTree PRIVATE ${SRC_DIR})
target_compile_definitions(binTree PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(binTree PRIVATE /EHsc /wd4996)
endif()

# ---- bitmap (BitMap) ----
add_executable(bitmap
    ${SRC_DIR}/BitMap/main.cpp
    ${SRC_DIR}/BitMap/Bitmap.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(bitmap PRIVATE ${SRC_DIR})
target_compile_definitions(bitmap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(bitmap PRIVATE /EHsc /wd4996)
endif()

# ---- bitmap.hopcroft (BitMap_hopcroft) ----
add_executable(bitmap.hopcroft
    ${SRC_DIR}/BitMap/main.cpp
)
target_include_directories(bitmap.hopcroft PRIVATE ${SRC_DIR})
target_compile_definitions(bitmap.hopcroft PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(bitmap.hopcroft PRIVATE /EHsc /wd4996)
endif()

# ---- Bitmap_set_only (Bitmap_set_only) ----
add_executable(Bitmap_set_only
    ${SRC_DIR}/Bitmap_set_only/main_O1_init_set_only.cpp
    ${SRC_DIR}/Bitmap_set_only/Bitmap_O1_init_set_only.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(Bitmap_set_only PRIVATE ${SRC_DIR})
target_compile_definitions(Bitmap_set_only PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(Bitmap_set_only PRIVATE /EHsc /wd4996)
endif()

# ---- BST (BST) ----
add_executable(BST
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/BST/main.cpp
    ${SRC_DIR}/BST/BST.h
    ${SRC_DIR}/BST/BST_RotateAt.h
    ${SRC_DIR}/BST/BST_connect34.h
    ${SRC_DIR}/BST/BST_search.h
    ${SRC_DIR}/BST/BST_test.h
    ${SRC_DIR}/BST/bst_implementation.h
    ${SRC_DIR}/BST/bst_insert.h
    ${SRC_DIR}/BST/bst_remove.h
    ${SRC_DIR}/BST/bst_removeAt.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(BST PRIVATE ${SRC_DIR})
target_compile_definitions(BST PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_DEBUG
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(BST PRIVATE /EHsc /wd4996)
endif()

# ---- BTree (BTree) ----
add_executable(BTree
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/BTree/main.cpp
    ${SRC_DIR}/BTree/BTNode.h
    ${SRC_DIR}/BTree/BTree.h
    ${SRC_DIR}/BTree/BTree_Test.h
    ${SRC_DIR}/BTree/BTree_implementation.h
    ${SRC_DIR}/BTree/BTree_insert.h
    ${SRC_DIR}/BTree/BTree_remove.h
    ${SRC_DIR}/BTree/BTree_search.h
    ${SRC_DIR}/BTree/BTree_solveOverflow.h
    ${SRC_DIR}/BTree/BTree_solveUnderflow.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(BTree PRIVATE ${SRC_DIR})
target_compile_definitions(BTree PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(BTree PRIVATE /EHsc /wd4996)
endif()

# ---- bubblesort (bubblesort) ----
add_executable(bubblesort
    ${SRC_DIR}/UniPrint/print_int_array.cpp
    ${SRC_DIR}/random/Shuffle.cpp
    ${SRC_DIR}/bubblesort/bubble.cpp
    ${SRC_DIR}/bubblesort/bubble1A.cpp
    ${SRC_DIR}/bubblesort/bubble1B.cpp
    ${SRC_DIR}/bubblesort/bubble2.cpp
    ${SRC_DIR}/bubblesort/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/random/Shuffle.h
    ${SRC_DIR}/random/randomSortedVector.h
)
target_include_directories(bubblesort PRIVATE ${SRC_DIR})
target_compile_definitions(bubblesort PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(bubblesort PRIVATE /EHsc /wd4996)
endif()

# ---- conversion (conversion) ----
add_executable(conversion
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/conversion/convert.cpp
    ${SRC_DIR}/conversion/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/conversion/convert.h
)
target_include_directories(conversion PRIVATE ${SRC_DIR})
target_compile_definitions(conversion PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(conversion PRIVATE /EHsc /wd4996)
endif()

# ---- conversion_recursive (conversion_recursive) ----
add_executable(conversion_recursive
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/conversion/main.cpp
    ${SRC_DIR}/conversion_recursive/convert.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/conversion/convert.h
)
target_include_directories(conversion_recursive PRIVATE ${SRC_DIR})
target_compile_definitions(conversion_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(conversion_recursive PRIVATE /EHsc /wd4996)
endif()

# ---- countones (countOnes) ----
add_executable(countones
    ${SRC_DIR}/countOnes/countOnes.cpp
    ${SRC_DIR}/countOnes/countOnes_1.cpp
    ${SRC_DIR}/countOnes/countOnes_2.cpp
    ${SRC_DIR}/countOnes/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(countones PRIVATE ${SRC_DIR})
target_compile_definitions(countones PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(countones PRIVATE /EHsc /wd4996)
endif()

# ---- cursor_list (cursor_list) ----
add_executable(cursor_list
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/cursor_list/test.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/cursor_list/cursor_list.h
    ${SRC_DIR}/cursor_list/cursor_list_implementation.h
)
target_include_directories(cursor_list PRIVATE ${SRC_DIR})
target_compile_definitions(cursor_list PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(cursor_list PRIVATE /EHsc /wd4996)
endif()

# ---- daxue (daxue) ----
add_executable(daxue
    ${SRC_DIR}/daxue/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(daxue PRIVATE ${SRC_DIR})
target_compile_definitions(daxue PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(daxue PRIVATE /EHsc /wd4996)
endif()

# ---- factorial (factorial) ----
add_executable(factorial
    ${SRC_DIR}/factorial/fac_iterative.cpp
    ${SRC_DIR}/factorial/fac_recursive.cpp
    ${SRC_DIR}/factorial/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/factorial/fac.h
)
target_include_directories(factorial PRIVATE ${SRC_DIR})
target_compile_definitions(factorial PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(factorial PRIVATE /EHsc /wd4996)
endif()

# ---- Fibonacci (fibonacci) ----
add_executable(Fibonacci
    ${SRC_DIR}/fibonacci/Fib0.cpp
    ${SRC_DIR}/fibonacci/Fib1.cpp
    ${SRC_DIR}/fibonacci/Fib2.cpp
    ${SRC_DIR}/fibonacci/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/fibonacci/Fib.h
)
target_include_directories(Fibonacci PRIVATE ${SRC_DIR})
target_compile_definitions(Fibonacci PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(Fibonacci PRIVATE /EHsc /wd4996)
endif()

# ---- gcd (gcd) ----
add_executable(gcd
    ${SRC_DIR}/gcd/gcd_chinese.cpp
    ${SRC_DIR}/gcd/gcd_euclidean.cpp
    ${SRC_DIR}/gcd/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(gcd PRIVATE ${SRC_DIR})
target_compile_definitions(gcd PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(gcd PRIVATE /EHsc /wd4996)
endif()

# ---- graphMatrix (graphmatrix) ----
add_executable(graphMatrix
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/graph/Graph_Test.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/graph/Graph.h
    ${SRC_DIR}/graph/Graph_Test.h
    ${SRC_DIR}/graph/Graph_bcc.h
    ${SRC_DIR}/graph/Graph_bfs.h
    ${SRC_DIR}/graph/Graph_bfs_PU.h
    ${SRC_DIR}/graph/Graph_dfs.h
    ${SRC_DIR}/graph/Graph_dfs_PU.h
    ${SRC_DIR}/graph/Graph_dijkstra.h
    ${SRC_DIR}/graph/Graph_dijkstra_PU.h
    ${SRC_DIR}/graph/Graph_implementation.h
    ${SRC_DIR}/graph/Graph_pfs.h
    ${SRC_DIR}/graph/Graph_prim.h
    ${SRC_DIR}/graph/Graph_prim_PU.h
    ${SRC_DIR}/graph/Graph_tsort.h
)
target_include_directories(graphMatrix PRIVATE ${SRC_DIR})
target_compile_definitions(graphMatrix PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(graphMatrix PRIVATE /EHsc /wd4996)
endif()

# ---- greatest_slice (greatest_slice) ----
add_executable(greatest_slice
    ${SRC_DIR}/sum/sum2.cpp
    ${SRC_DIR}/greatest_slice/gs_bf.cpp
    ${SRC_DIR}/greatest_slice/gs_dc.cpp
    ${SRC_DIR}/greatest_slice/gs_ic.cpp
    ${SRC_DIR}/greatest_slice/gs_ls.cpp
    ${SRC_DIR}/greatest_slice/test.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/sum/sum.h
)
target_include_directories(greatest_slice PRIVATE ${SRC_DIR})
target_compile_definitions(greatest_slice PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(greatest_slice PRIVATE /EHsc /wd4996)
endif()

# ---- hanoi (hanoi) ----
add_executable(hanoi
    ${SRC_DIR}/hanoi/display.cpp
    ${SRC_DIR}/hanoi/hanoi.cpp
    ${SRC_DIR}/hanoi/main.cpp
    ${SRC_DIR}/hanoi/move_disk.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/hanoi/hanoi.h
)
target_include_directories(hanoi PRIVATE ${SRC_DIR})
target_compile_definitions(hanoi PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(hanoi PRIVATE /EHsc /wd4996)
endif()

# ---- hashtable (hashtable) ----
add_executable(hashtable
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/hashtable/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/hashtable/HashTable.h
    ${SRC_DIR}/hashtable/HashTable_Implementation.h
    ${SRC_DIR}/hashtable/HashTable_constructor.h
    ${SRC_DIR}/hashtable/HashTable_destructor.h
    ${SRC_DIR}/hashtable/HashTable_get.h
    ${SRC_DIR}/hashtable/HashTable_hashcode.h
    ${SRC_DIR}/hashtable/HashTable_probe4Free.h
    ${SRC_DIR}/hashtable/HashTable_put.h
    ${SRC_DIR}/hashtable/HashTable_rehash.h
    ${SRC_DIR}/hashtable/HashTable_remove.h
    ${SRC_DIR}/hashtable/HashTable_test.h
    ${SRC_DIR}/hashtable/Hashtable_probe4Hit.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(hashtable PRIVATE ${SRC_DIR})
target_compile_definitions(hashtable PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(hashtable PRIVATE /EHsc /wd4996)
endif()

# ---- huffman (huffman) ----
add_executable(huffman
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_Test.cpp
    ${SRC_DIR}/huffman/huffman_decode.cpp
    ${SRC_DIR}/huffman/huffman_encode.cpp
    ${SRC_DIR}/huffman/huffman_generateTable.cpp
    ${SRC_DIR}/huffman/huffman_generateTree.cpp
    ${SRC_DIR}/huffman/huffman_initForest.cpp
    ${SRC_DIR}/huffman/huffman_statistics.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/huffman/HuffCode.h
    ${SRC_DIR}/huffman/HuffTable.h
    ${SRC_DIR}/huffman/HuffTree.h
    ${SRC_DIR}/huffman/Huffman_Forest_List.h
    ${SRC_DIR}/huffman/Huffman_PQ.h
    ${SRC_DIR}/huffman/Huffman_PQ_test.h
    ${SRC_DIR}/huffman/huffChar.h
    ${SRC_DIR}/huffman/huffman_test.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(huffman PRIVATE ${SRC_DIR})
target_compile_definitions(huffman PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_HUFFMAN
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(huffman PRIVATE /EHsc /wd4996)
endif()

# ---- Huffman_PQ_ComplHeap (Huffman_PQ_ComplHeap) ----
add_executable(Huffman_PQ_ComplHeap
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_Test.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_generateTree.cpp
    ${SRC_DIR}/huffman/huffman_PQ_initForest.cpp
    ${SRC_DIR}/huffman/huffman_decode.cpp
    ${SRC_DIR}/huffman/huffman_encode.cpp
    ${SRC_DIR}/huffman/huffman_generateTable.cpp
    ${SRC_DIR}/huffman/huffman_statistics.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/huffman/HuffCode.h
    ${SRC_DIR}/huffman/HuffTable.h
    ${SRC_DIR}/huffman/HuffTree.h
    ${SRC_DIR}/huffman/Huffman_Forest_List.h
    ${SRC_DIR}/huffman/Huffman_PQ.h
    ${SRC_DIR}/huffman/Huffman_PQ_test.h
    ${SRC_DIR}/huffman/huffChar.h
    ${SRC_DIR}/huffman/huffman_test.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(Huffman_PQ_ComplHeap PRIVATE ${SRC_DIR})
target_compile_definitions(Huffman_PQ_ComplHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_HUFFMAN
    DSA_PQ_COMPLHEAP
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(Huffman_PQ_ComplHeap PRIVATE /EHsc /wd4996)
endif()

# ---- Huffman_PQ_LeftHeap (Huffman_PQ_LeftHeap) ----
add_executable(Huffman_PQ_LeftHeap
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_Test.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_generateTree.cpp
    ${SRC_DIR}/huffman/huffman_PQ_initForest.cpp
    ${SRC_DIR}/huffman/huffman_decode.cpp
    ${SRC_DIR}/huffman/huffman_encode.cpp
    ${SRC_DIR}/huffman/huffman_generateTable.cpp
    ${SRC_DIR}/huffman/huffman_statistics.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/huffman/HuffCode.h
    ${SRC_DIR}/huffman/HuffTable.h
    ${SRC_DIR}/huffman/HuffTree.h
    ${SRC_DIR}/huffman/Huffman_Forest_List.h
    ${SRC_DIR}/huffman/Huffman_PQ.h
    ${SRC_DIR}/huffman/Huffman_PQ_test.h
    ${SRC_DIR}/huffman/huffChar.h
    ${SRC_DIR}/huffman/huffman_test.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(Huffman_PQ_LeftHeap PRIVATE ${SRC_DIR})
target_compile_definitions(Huffman_PQ_LeftHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_HUFFMAN
    DSA_PQ_LEFTHEAP
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(Huffman_PQ_LeftHeap PRIVATE /EHsc /wd4996)
endif()

# ---- Huffman_PQ_List (Huffman_PQ_List) ----
add_executable(Huffman_PQ_List
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_Test.cpp
    ${SRC_DIR}/huffman/Huffman_PQ_generateTree.cpp
    ${SRC_DIR}/huffman/huffman_PQ_initForest.cpp
    ${SRC_DIR}/huffman/huffman_decode.cpp
    ${SRC_DIR}/huffman/huffman_encode.cpp
    ${SRC_DIR}/huffman/huffman_generateTable.cpp
    ${SRC_DIR}/huffman/huffman_statistics.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/huffman/HuffCode.h
    ${SRC_DIR}/huffman/HuffTable.h
    ${SRC_DIR}/huffman/HuffTree.h
    ${SRC_DIR}/huffman/Huffman_Forest_List.h
    ${SRC_DIR}/huffman/Huffman_PQ.h
    ${SRC_DIR}/huffman/Huffman_PQ_test.h
    ${SRC_DIR}/huffman/huffChar.h
    ${SRC_DIR}/huffman/huffman_test.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(Huffman_PQ_List PRIVATE ${SRC_DIR})
target_compile_definitions(Huffman_PQ_List PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_HUFFMAN
    DSA_PQ_LIST
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(Huffman_PQ_List PRIVATE /EHsc /wd4996)
endif()

# ---- laby (laby) ----
add_executable(laby
    ${SRC_DIR}/laby/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/laby/Cell.h
    ${SRC_DIR}/laby/Laby.h
    ${SRC_DIR}/laby/advance.h
    ${SRC_DIR}/laby/displayLaby.h
    ${SRC_DIR}/laby/neighbor.h
    ${SRC_DIR}/laby/randLaby.h
    ${SRC_DIR}/laby/readLaby.h
)
target_include_directories(laby PRIVATE ${SRC_DIR})
target_compile_definitions(laby PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(laby PRIVATE /EHsc /wd4996)
endif()

# ---- lcs (lcs) ----
add_executable(lcs
    ${SRC_DIR}/lcs/lcsI.cpp
    ${SRC_DIR}/lcs/lcsM.cpp
    ${SRC_DIR}/lcs/lcsR.cpp
    ${SRC_DIR}/lcs/test.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(lcs PRIVATE ${SRC_DIR})
target_compile_definitions(lcs PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(lcs PRIVATE /EHsc /wd4996)
endif()

# ---- list (list) ----
add_executable(list
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/list/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/list/List_RadixSort.h
    ${SRC_DIR}/list/List_SelectionSort.h
    ${SRC_DIR}/list/List_deduplicate.h
    ${SRC_DIR}/list/List_find.h
    ${SRC_DIR}/list/List_insert.h
    ${SRC_DIR}/list/List_insertionsort.h
    ${SRC_DIR}/list/List_merge.h
    ${SRC_DIR}/list/List_mergesort.h
    ${SRC_DIR}/list/List_search.h
    ${SRC_DIR}/list/List_selectMax.h
    ${SRC_DIR}/list/List_sort.h
    ${SRC_DIR}/list/List_traverse.h
    ${SRC_DIR}/list/List_uniquify.h
    ${SRC_DIR}/list/list.h
    ${SRC_DIR}/list/listNode.h
    ${SRC_DIR}/list/listNode_implementation.h
    ${SRC_DIR}/list/listNode_insertAsPred.h
    ${SRC_DIR}/list/listNode_insertAsSucc.h
    ${SRC_DIR}/list/list_bracket.h
    ${SRC_DIR}/list/list_clear.h
    ${SRC_DIR}/list/list_constructor_by_copying.h
    ${SRC_DIR}/list/list_copyNodes.h
    ${SRC_DIR}/list/list_destructor.h
    ${SRC_DIR}/list/list_implementation.h
    ${SRC_DIR}/list/list_initialize.h
    ${SRC_DIR}/list/list_remove.h
    ${SRC_DIR}/list/list_reverse1.h
    ${SRC_DIR}/list/list_reverse2.h
    ${SRC_DIR}/list/list_reverse3.h
    ${SRC_DIR}/list/list_test.h
)
target_include_directories(list PRIVATE ${SRC_DIR})
target_compile_definitions(list PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(list PRIVATE /EHsc /wd4996)
endif()

# ---- majority (majority) ----
add_executable(majority
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/majority/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/majority/majority.h
    ${SRC_DIR}/majority/majorityCandidate.h
    ${SRC_DIR}/majority/majorityCheck.h
)
target_include_directories(majority PRIVATE ${SRC_DIR})
target_compile_definitions(majority PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(majority PRIVATE /EHsc /wd4996)
endif()

# ---- maxRect (maxRect) ----
add_executable(maxRect
    ${SRC_DIR}/maxRect/mr_BF.cpp
    ${SRC_DIR}/maxRect/mr_STACK.cpp
    ${SRC_DIR}/maxRect/mr_STACKS.cpp
    ${SRC_DIR}/maxRect/test.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(maxRect PRIVATE ${SRC_DIR})
target_compile_definitions(maxRect PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(maxRect PRIVATE /EHsc /wd4996)
endif()

# ---- median1 (median1) ----
add_executable(median1
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/random/randomSortedVector.cpp
    ${SRC_DIR}/median1/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/median1/median.h
    ${SRC_DIR}/median1/trivialMedian.h
    ${SRC_DIR}/random/Shuffle.h
    ${SRC_DIR}/random/randomSortedVector.h
)
target_include_directories(median1 PRIVATE ${SRC_DIR})
target_compile_definitions(median1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(median1 PRIVATE /EHsc /wd4996)
endif()

# ---- median2 (median2) ----
add_executable(median2
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/random/randomSortedVector.cpp
    ${SRC_DIR}/median2/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/median2/median.h
    ${SRC_DIR}/random/Shuffle.h
    ${SRC_DIR}/random/randomSortedVector.h
)
target_include_directories(median2 PRIVATE ${SRC_DIR})
target_compile_definitions(median2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(median2 PRIVATE /EHsc /wd4996)
endif()

# ---- paren_recursive (nest_recursive) ----
add_executable(paren_recursive
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/nest_stack/main.cpp
    ${SRC_DIR}/nest_recursive/display.cpp
    ${SRC_DIR}/nest_recursive/nest.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/nest_stack/nest.h
)
target_include_directories(paren_recursive PRIVATE ${SRC_DIR})
target_compile_definitions(paren_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
    STACK_ELEM_TYPE_CHAR
)
if(MSVC)
    target_compile_options(paren_recursive PRIVATE /EHsc /wd4996)
endif()

# ---- paren_stack (nest_stack) ----
add_executable(paren_stack
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/nest_recursive/display.cpp
    ${SRC_DIR}/nest_stack/main.cpp
    ${SRC_DIR}/nest_stack/nest.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/nest_stack/nest.h
)
target_include_directories(paren_stack PRIVATE ${SRC_DIR})
target_compile_definitions(paren_stack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
    LLIST_ELEM_TYPE_CHAR
    LLIST_TYPE_DOUBLYLINKEDLIST
)
if(MSVC)
    target_compile_options(paren_stack PRIVATE /EHsc /wd4996)
endif()

# ---- power (power) ----
add_executable(power
    ${SRC_DIR}/power/Power0.cpp
    ${SRC_DIR}/power/Power1.cpp
    ${SRC_DIR}/power/Power2-0-I.cpp
    ${SRC_DIR}/power/Power2-0-R.cpp
    ${SRC_DIR}/power/Power2-1-I.cpp
    ${SRC_DIR}/power/Power2-1-R.cpp
    ${SRC_DIR}/power/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(power PRIVATE ${SRC_DIR})
target_compile_definitions(power PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(power PRIVATE /EHsc /wd4996)
endif()

# ---- PQ_BinHeap (PQ_ComplHeap) ----
add_executable(PQ_BinHeap
    ${SRC_DIR}/PQ/PQ_Test.cpp
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/PQ/PQ.h
    ${SRC_DIR}/PQ/PQ_Test.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(PQ_BinHeap PRIVATE ${SRC_DIR})
target_compile_definitions(PQ_BinHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_COMPLHEAP
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(PQ_BinHeap PRIVATE /EHsc /wd4996)
endif()

# ---- PQ_leftHeap (PQ_leftheap) ----
add_executable(PQ_leftHeap
    ${SRC_DIR}/PQ/PQ_Test.cpp
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/PQ/PQ.h
    ${SRC_DIR}/PQ/PQ_Test.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(PQ_leftHeap PRIVATE ${SRC_DIR})
target_compile_definitions(PQ_leftHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_LEFTHEAP
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(PQ_leftHeap PRIVATE /EHsc /wd4996)
endif()

# ---- PQ_List (PQ_List) ----
add_executable(PQ_List
    ${SRC_DIR}/PQ/PQ_Test.cpp
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/PQ/PQ.h
    ${SRC_DIR}/PQ/PQ_Test.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(PQ_List PRIVATE ${SRC_DIR})
target_compile_definitions(PQ_List PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_LIST
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(PQ_List PRIVATE /EHsc /wd4996)
endif()

# ---- prime (prime) ----
add_executable(prime
    ${SRC_DIR}/prime/Eratosthenes.cpp
    ${SRC_DIR}/prime/main.cpp
    ${SRC_DIR}/prime/primeNLT.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/prime/Eratosthenes.h
    ${SRC_DIR}/prime/primeNLT.h
)
target_include_directories(prime PRIVATE ${SRC_DIR})
target_compile_definitions(prime PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(prime PRIVATE /EHsc /wd4996)
endif()

# ---- queen_brute_force_1 (queen_brute_force_1) ----
add_executable(queen_brute_force_1
    ${SRC_DIR}/queen_brute_force_1/5queens.cpp
    ${SRC_DIR}/queen_brute_force_1/collision.cpp
    ${SRC_DIR}/queen_brute_force_1/displaySolution.cpp
    ${SRC_DIR}/queen_brute_force_1/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/queen_brute_force_1/queen.h
)
target_include_directories(queen_brute_force_1 PRIVATE ${SRC_DIR})
target_compile_definitions(queen_brute_force_1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(queen_brute_force_1 PRIVATE /EHsc /wd4996)
endif()

# ---- queen_brute_force_2 (queen_brute_force_2) ----
add_executable(queen_brute_force_2
    ${SRC_DIR}/queen_brute_force_1/collision.cpp
    ${SRC_DIR}/queen_brute_force_1/displaySolution.cpp
    ${SRC_DIR}/queen_brute_force_2/2queens.cpp
    ${SRC_DIR}/queen_brute_force_2/3queens.cpp
    ${SRC_DIR}/queen_brute_force_2/4queens.cpp
    ${SRC_DIR}/queen_brute_force_2/5queens.cpp
    ${SRC_DIR}/queen_brute_force_2/main.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/queen_brute_force_1/queen.h
)
target_include_directories(queen_brute_force_2 PRIVATE ${SRC_DIR})
target_compile_definitions(queen_brute_force_2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(queen_brute_force_2 PRIVATE /EHsc /wd4996)
endif()

# ---- queen_recursive (queen_recursive) ----
add_executable(queen_recursive
    ${SRC_DIR}/queen_brute_force_1/collision.cpp
    ${SRC_DIR}/queen_brute_force_1/displaySolution.cpp
    ${SRC_DIR}/queen_recursive/main.cpp
    ${SRC_DIR}/queen_recursive/placeQueens.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/queen_brute_force_1/queen.h
)
target_include_directories(queen_recursive PRIVATE ${SRC_DIR})
target_compile_definitions(queen_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(queen_recursive PRIVATE /EHsc /wd4996)
endif()

# ---- queen_stack (queen_stack) ----
add_executable(queen_stack
    ${SRC_DIR}/queen_stack/displayProgress.cpp
    ${SRC_DIR}/queen_stack/main.cpp
    ${SRC_DIR}/queen_stack/placeQueens.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/queen_stack/queen.h
    ${SRC_DIR}/queen_stack/queen_stack.h
)
target_include_directories(queen_stack PRIVATE ${SRC_DIR})
target_compile_definitions(queen_stack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(queen_stack PRIVATE /EHsc /wd4996)
endif()

# ---- queue (queue) ----
add_executable(queue
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/queue/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/queue/queue.h
    ${SRC_DIR}/queue/queue_implementation.h
    ${SRC_DIR}/queue/queue_test.h
)
target_include_directories(queue PRIVATE ${SRC_DIR})
target_compile_definitions(queue PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(queue PRIVATE /EHsc /wd4996)
endif()

# ---- RedBlack (redBlack) ----
add_executable(RedBlack
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/redBlack/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/redBlack/RedBlack.h
    ${SRC_DIR}/redBlack/RedBlack_Insert.h
    ${SRC_DIR}/redBlack/RedBlack_implementation.h
    ${SRC_DIR}/redBlack/RedBlack_remove.h
    ${SRC_DIR}/redBlack/RedBlack_solveDoubleBlack.h
    ${SRC_DIR}/redBlack/RedBlack_solveDoubleRed.h
    ${SRC_DIR}/redBlack/RedBlack_test.h
    ${SRC_DIR}/redBlack/RedBlack_updateHeight.h
)
target_include_directories(RedBlack PRIVATE ${SRC_DIR})
target_compile_definitions(RedBlack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_REDBLACK
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(RedBlack PRIVATE /EHsc /wd4996)
endif()

# ---- rpn (rpn) ----
add_executable(rpn
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/factorial/fac_iterative.cpp
    ${SRC_DIR}/rpn/append2RPN.cpp
    ${SRC_DIR}/rpn/calculation.cpp
    ${SRC_DIR}/rpn/displayProgress.cpp
    ${SRC_DIR}/rpn/main.cpp
    ${SRC_DIR}/rpn/priority.cpp
    ${SRC_DIR}/rpn/readNumber.cpp
    ${SRC_DIR}/rpn/rpn.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/factorial/fac.h
    ${SRC_DIR}/rpn/priority.h
    ${SRC_DIR}/rpn/rpn.h
)
target_include_directories(rpn PRIVATE ${SRC_DIR})
target_compile_definitions(rpn PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(rpn PRIVATE /EHsc /wd4996)
endif()

# ---- selection (selection) ----
add_executable(selection
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/selection/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/selection/quickselect.h
)
target_include_directories(selection PRIVATE ${SRC_DIR})
target_compile_definitions(selection PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(selection PRIVATE /EHsc /wd4996)
endif()

# ---- shiftK (shiftK) ----
add_executable(shiftK
    ${SRC_DIR}/UniPrint/print_int_array.cpp
    ${SRC_DIR}/reverse/reverse-recursive.cpp
    ${SRC_DIR}/shiftK/main.cpp
    ${SRC_DIR}/shiftK/shift.cpp
    ${SRC_DIR}/shiftK/shift0.cpp
    ${SRC_DIR}/shiftK/shift1.cpp
    ${SRC_DIR}/shiftK/shift2.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/reverse/reverse.h
)
target_include_directories(shiftK PRIVATE ${SRC_DIR})
target_compile_definitions(shiftK PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(shiftK PRIVATE /EHsc /wd4996)
endif()

# ---- simu (simu) ----
add_executable(simu
    ${SRC_DIR}/simu/bestWindow.cpp
    ${SRC_DIR}/simu/displayProgress.cpp
    ${SRC_DIR}/simu/main.cpp
    ${SRC_DIR}/simu/simu.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/simu/Customer.h
    ${SRC_DIR}/simu/simu.h
)
target_include_directories(simu PRIVATE ${SRC_DIR})
target_compile_definitions(simu PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(simu PRIVATE /EHsc /wd4996)
endif()

# ---- skiplist (skiplist) ----
add_executable(skiplist
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/skiplist/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/skiplist/QuadList.h
    ${SRC_DIR}/skiplist/QuadListNode.h
    ${SRC_DIR}/skiplist/QuadListNode_implementation.h
    ${SRC_DIR}/skiplist/QuadListNode_insert.h
    ${SRC_DIR}/skiplist/QuadList_implementation.h
    ${SRC_DIR}/skiplist/QuadList_initialize.h
    ${SRC_DIR}/skiplist/QuadList_insert.h
    ${SRC_DIR}/skiplist/QuadList_remove.h
    ${SRC_DIR}/skiplist/QuadList_traverse.h
    ${SRC_DIR}/skiplist/SkipList.h
    ${SRC_DIR}/skiplist/SkipList_get.h
    ${SRC_DIR}/skiplist/SkipList_implementation.h
    ${SRC_DIR}/skiplist/SkipList_put.h
    ${SRC_DIR}/skiplist/SkipList_remove.h
    ${SRC_DIR}/skiplist/SkipList_search.h
    ${SRC_DIR}/skiplist/SkipList_test.h
)
target_include_directories(skiplist PRIVATE ${SRC_DIR})
target_compile_definitions(skiplist PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(skiplist PRIVATE /EHsc /wd4996)
endif()

# ---- SMMH (SMMH) ----
add_executable(SMMH
    ${SRC_DIR}/DEPQ/DEPQ_Test.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/DEPQ/DEPQ.h
    ${SRC_DIR}/DEPQ/DEPQ_Test.h
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
)
target_include_directories(SMMH PRIVATE ${SRC_DIR})
target_compile_definitions(SMMH PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_DEPQ_SMMH
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(SMMH PRIVATE /EHsc /wd4996)
endif()

# ---- sorter (sorter) ----
add_executable(sorter
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/factorial/fac_iterative.cpp
    ${SRC_DIR}/sorter/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/factorial/fac.h
)
target_include_directories(sorter PRIVATE ${SRC_DIR})
target_compile_definitions(sorter PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(sorter PRIVATE /EHsc /wd4996)
endif()

# ---- Splay (splay) ----
add_executable(Splay
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/splay/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/splay/Splay.h
    ${SRC_DIR}/splay/Splay_Insert.h
    ${SRC_DIR}/splay/Splay_implementation.h
    ${SRC_DIR}/splay/Splay_remove.h
    ${SRC_DIR}/splay/Splay_search.h
    ${SRC_DIR}/splay/Splay_splay.h
    ${SRC_DIR}/splay/Splay_test.h
)
target_include_directories(Splay PRIVATE ${SRC_DIR})
target_compile_definitions(Splay PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(Splay PRIVATE /EHsc /wd4996)
endif()

# ---- stack_list (stack_list) ----
add_executable(stack_list
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/stack/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/stack/stack.h
    ${SRC_DIR}/stack/stack_test.h
)
target_include_directories(stack_list PRIVATE ${SRC_DIR})
target_compile_definitions(stack_list PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(stack_list PRIVATE /EHsc /wd4996)
endif()

# ---- stack_vector (stack_vector) ----
add_executable(stack_vector
    ${SRC_DIR}/UniPrint/print_HuffChar.cpp
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/stack/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/stack/stack.h
    ${SRC_DIR}/stack/stack_test.h
)
target_include_directories(stack_vector PRIVATE ${SRC_DIR})
target_compile_definitions(stack_vector PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
if(MSVC)
    target_compile_options(stack_vector PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_bf1 (string_pm_bf1) ----
add_executable(string_pm_bf1
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_bf1/pm_brute1.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
)
target_include_directories(string_pm_bf1 PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_bf1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_bf1 PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_bf2 (string_pm_bf2) ----
add_executable(string_pm_bf2
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_bf2/pm_brute2.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
)
target_include_directories(string_pm_bf2 PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_bf2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_bf2 PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_bm_bc (string_pm_bm_bc) ----
add_executable(string_pm_bm_bc
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_bm_bc/pm_bm_bc.cpp
    ${SRC_DIR}/string_pm_bm_bc/pm_bm_buildBC.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
    ${SRC_DIR}/string_pm_bm_bc/pm_bm.h
)
target_include_directories(string_pm_bm_bc PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_bm_bc PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_bm_bc PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_bm_bc+gs (string_pm_bm_bc+gs) ----
add_executable(string_pm_bm_bc+gs
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_bm_bc/pm_bm_buildBC.cpp
    ${SRC_DIR}/string_pm_bm_bc+gs/pm_bm_bc+gs.cpp
    ${SRC_DIR}/string_pm_bm_bc+gs/pm_bm_buildGS.cpp
)
target_include_directories(string_pm_bm_bc+gs PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_bm_bc+gs PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_bm_bc+gs PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_kmp (string_pm_kmp) ----
add_executable(string_pm_kmp
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_kmp/pm_kmp.cpp
    ${SRC_DIR}/string_pm_kmp/pm_kmp_next.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
)
target_include_directories(string_pm_kmp PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_kmp PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_kmp PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_kmp_improved (string_pm_kmp_improved) ----
add_executable(string_pm_kmp_improved
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_kmp/pm_kmp.cpp
    ${SRC_DIR}/string_pm_kmp_improved/pm_kmp_next_improved.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
)
target_include_directories(string_pm_kmp_improved PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_kmp_improved PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_kmp_improved PRIVATE /EHsc /wd4996)
endif()

# ---- string_pm_kr (string_pm_kr) ----
add_executable(string_pm_kr
    ${SRC_DIR}/string_pm/string_pm_test.cpp
    ${SRC_DIR}/string_pm_kr/pm_kr.cpp
    ${SRC_DIR}/string_pm_kr/pm_kr_check1by1.cpp
    ${SRC_DIR}/string_pm_kr/pm_kr_prepareDm.cpp
    ${SRC_DIR}/string_pm_kr/pm_kr_updateHash.cpp
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/string_pm/string_pm_test.h
    ${SRC_DIR}/string_pm_kr/pm_kr.h
)
target_include_directories(string_pm_kr PRIVATE ${SRC_DIR})
target_compile_definitions(string_pm_kr PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(string_pm_kr PRIVATE /EHsc /wd4996)
endif()

# ---- sum (sum) ----
add_executable(sum
    ${SRC_DIR}/UniPrint/print_int_array.cpp
    ${SRC_DIR}/random/Shuffle.cpp
    ${SRC_DIR}/reverse/reverse-iterative-1.cpp
    ${SRC_DIR}/sum/main.cpp
    ${SRC_DIR}/sum/sum0.cpp
    ${SRC_DIR}/sum/sum1.cpp
    ${SRC_DIR}/sum/sum2.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/random/Shuffle.h
    ${SRC_DIR}/random/randomSortedVector.h
    ${SRC_DIR}/reverse/reverse.h
    ${SRC_DIR}/sum/sum.h
)
target_include_directories(sum PRIVATE ${SRC_DIR})
target_compile_definitions(sum PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
if(MSVC)
    target_compile_options(sum PRIVATE /EHsc /wd4996)
endif()

# ---- vector (vector) ----
add_executable(vector
    ${SRC_DIR}/UniPrint/print_basic.cpp
    ${SRC_DIR}/vector/main.cpp
    ${SRC_DIR}/UniPrint/print.h
    ${SRC_DIR}/UniPrint/print_Entry.h
    ${SRC_DIR}/UniPrint/print_GraphMatrix.h
    ${SRC_DIR}/UniPrint/print_HashTable.h
    ${SRC_DIR}/UniPrint/print_PQ_ComplHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_LeftHeap.h
    ${SRC_DIR}/UniPrint/print_PQ_List.h
    ${SRC_DIR}/UniPrint/print_QuadList.h
    ${SRC_DIR}/UniPrint/print_SkipList.h
    ${SRC_DIR}/UniPrint/print_binNode.h
    ${SRC_DIR}/UniPrint/print_bintree.h
    ${SRC_DIR}/UniPrint/print_btree.h
    ${SRC_DIR}/UniPrint/print_implementation.h
    ${SRC_DIR}/UniPrint/print_int_array.h
    ${SRC_DIR}/UniPrint/print_traversable.h
    ${SRC_DIR}/_share/Hailstone_Elem.h
    ${SRC_DIR}/_share/checkOrder_Elem.h
    ${SRC_DIR}/_share/checkOrder_list.h
    ${SRC_DIR}/_share/checkOrder_vector.h
    ${SRC_DIR}/_share/crc_Elem.h
    ${SRC_DIR}/_share/crc_list.h
    ${SRC_DIR}/_share/crc_vector.h
    ${SRC_DIR}/_share/decrease_Elem.h
    ${SRC_DIR}/_share/decrease_list.h
    ${SRC_DIR}/_share/decrease_vector.h
    ${SRC_DIR}/_share/double_Elem.h
    ${SRC_DIR}/_share/double_vector.h
    ${SRC_DIR}/_share/half_Elem.h
    ${SRC_DIR}/_share/half_list.h
    ${SRC_DIR}/_share/increase_Elem.h
    ${SRC_DIR}/_share/increase_list.h
    ${SRC_DIR}/_share/increase_vector.h
    ${SRC_DIR}/_share/rand.h
    ${SRC_DIR}/_share/release.h
    ${SRC_DIR}/_share/util.h
    ${SRC_DIR}/vector/Vector_deduplicate.h
    ${SRC_DIR}/vector/Vector_insert.h
    ${SRC_DIR}/vector/Vector_merge.h
    ${SRC_DIR}/vector/Vector_search.h
    ${SRC_DIR}/vector/Vector_search_binary_A.h
    ${SRC_DIR}/vector/Vector_search_binary_B.h
    ${SRC_DIR}/vector/Vector_search_binary_C.h
    ${SRC_DIR}/vector/Vector_search_fibonaccian_A.h
    ${SRC_DIR}/vector/Vector_search_fibonaccian_B.h
    ${SRC_DIR}/vector/Vector_uniquify.h
    ${SRC_DIR}/vector/Vector_uniquify_slow.h
    ${SRC_DIR}/vector/permute.h
    ${SRC_DIR}/vector/vector.h
    ${SRC_DIR}/vector/vector_assignment.h
    ${SRC_DIR}/vector/vector_bracket.h
    ${SRC_DIR}/vector/vector_bubblesort_A.h
    ${SRC_DIR}/vector/vector_bubblesort_B.h
    ${SRC_DIR}/vector/vector_bubblesort_C.h
    ${SRC_DIR}/vector/vector_constructor_by_copying.h
    ${SRC_DIR}/vector/vector_deduplicate_1.h
    ${SRC_DIR}/vector/vector_deduplicate_wrong_1.h
    ${SRC_DIR}/vector/vector_expand.h
    ${SRC_DIR}/vector/vector_find.h
    ${SRC_DIR}/vector/vector_heapSort.h
    ${SRC_DIR}/vector/vector_implementation.h
    ${SRC_DIR}/vector/vector_mergeSort.h
    ${SRC_DIR}/vector/vector_partition_DUP.h
    ${SRC_DIR}/vector/vector_partition_DUP_2.h
    ${SRC_DIR}/vector/vector_partition_LGU.h
    ${SRC_DIR}/vector/vector_partition_LUG.h
    ${SRC_DIR}/vector/vector_partition_LUG_2.h
    ${SRC_DIR}/vector/vector_quickSort_iterative.h
    ${SRC_DIR}/vector/vector_quickSort_recursive.h
    ${SRC_DIR}/vector/vector_remove.h
    ${SRC_DIR}/vector/vector_removeInterval.h
    ${SRC_DIR}/vector/vector_selectionsort.h
    ${SRC_DIR}/vector/vector_shellSort.h
    ${SRC_DIR}/vector/vector_shrink.h
    ${SRC_DIR}/vector/vector_sort.h
    ${SRC_DIR}/vector/vector_test.h
    ${SRC_DIR}/vector/vector_traverse.h
    ${SRC_DIR}/vector/vector_unsort.h
)
target_include_directories(vector PRIVATE ${SRC_DIR})
target_compile_definitions(vector PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_COMPLHEAP
    DSA_STACK_LIST
)
if(MSVC)
    target_compile_options(vector PRIVATE /EHsc /wd4996)
endif()

# ============================================================
# Group targets into VS solution folders by textbook chapter (visual only,
# does not change on-disk layout). Target names follow the actual
# add_executable names in this file, which differ from dir/old-project names.
# ============================================================
set_property(TARGET countones sum factorial Fibonacci gcd power hanoi
        greatest_slice majority median1 median2 shiftK maxRect prime lcs daxue simu
    PROPERTY FOLDER "ch01_Introduction")

set_property(TARGET vector bitmap bitmap.hopcroft Bitmap_set_only
    PROPERTY FOLDER "ch02_Vector")

set_property(TARGET list cursor_list
    PROPERTY FOLDER "ch03_List")

set_property(TARGET stack_vector stack_list queue conversion conversion_recursive
        rpn paren_recursive paren_stack laby queen_brute_force_1 queen_brute_force_2
        queen_recursive queen_stack
    PROPERTY FOLDER "ch04_StackQueue")

set_property(TARGET binTree
    PROPERTY FOLDER "ch05_BinaryTree")

set_property(TARGET graphMatrix
    PROPERTY FOLDER "ch06_Graph")

set_property(TARGET BST AVL Splay RedBlack
    PROPERTY FOLDER "ch07_SearchTree")

set_property(TARGET BTree
    PROPERTY FOLDER "ch08_AdvancedSearchTree")

set_property(TARGET hashtable skiplist
    PROPERTY FOLDER "ch09_Dictionary")

set_property(TARGET PQ_BinHeap PQ_leftHeap PQ_List SMMH huffman
        Huffman_PQ_ComplHeap Huffman_PQ_LeftHeap Huffman_PQ_List
    PROPERTY FOLDER "ch10_PriorityQueue")

set_property(TARGET string_pm_bf1 string_pm_bf2 string_pm_kmp string_pm_kmp_improved
        string_pm_bm_bc string_pm_bm_bc+gs string_pm_kr
    PROPERTY FOLDER "ch11_String")

set_property(TARGET bubblesort selection sorter
    PROPERTY FOLDER "ch12_Sorting")
