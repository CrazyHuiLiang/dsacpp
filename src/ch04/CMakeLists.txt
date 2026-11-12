foreach(project IN ITEMS conversion conversion_recursive laby nest_recursive nest_stack queen_brute_force_1 queen_brute_force_2 queen_recursive queen_stack queue rpn stack_list stack_vector)
    add_subdirectory(${project})
endforeach()
