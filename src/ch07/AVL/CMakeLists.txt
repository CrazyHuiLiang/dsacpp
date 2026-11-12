add_executable(AVL
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch07/AVL/main.cpp
)
dsacpp_configure_target(AVL)
target_compile_definitions(AVL PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_AVL
    DSA_STACK_LIST
)
