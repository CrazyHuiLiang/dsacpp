add_executable(paren_recursive
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_stack/main.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_recursive/display.cpp
    ${DSACPP_SOURCE_DIR}/ch04/nest_recursive/nest.cpp
)
dsacpp_configure_target(paren_recursive)
target_compile_definitions(paren_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
    STACK_ELEM_TYPE_CHAR
)
