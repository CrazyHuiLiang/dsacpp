add_executable(stack_list
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_COMMON_DIR}/stack/main.cpp
)
dsacpp_configure_target(stack_list)
target_compile_definitions(stack_list PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
