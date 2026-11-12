add_executable(cursor_list
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch03/cursor_list/test.cpp
)
dsacpp_configure_target(cursor_list)
target_compile_definitions(cursor_list PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
