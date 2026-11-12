add_executable(paren_stack
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_recursive/display.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_stack/main.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_stack/nest.cpp
)
dsacpp_configure_target(paren_stack)
target_compile_definitions(paren_stack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
    LLIST_ELEM_TYPE_CHAR
    LLIST_TYPE_DOUBLYLINKEDLIST
)
