foreach(project IN ITEMS hashtable skiplist)
    add_subdirectory(${project})
endforeach()
