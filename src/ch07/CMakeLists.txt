foreach(project IN ITEMS AVL BST redBlack splay)
    add_subdirectory(${project})
endforeach()
