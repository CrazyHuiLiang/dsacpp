foreach(project IN ITEMS cursor_list list)
    add_subdirectory(${project})
endforeach()
