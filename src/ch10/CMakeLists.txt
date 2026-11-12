foreach(project IN ITEMS Huffman_PQ_ComplHeap Huffman_PQ_LeftHeap Huffman_PQ_List PQ_ComplHeap PQ_List PQ_leftheap SMMH huffman)
    add_subdirectory(${project})
endforeach()
