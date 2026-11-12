add_executable(RedBlack
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch07/redBlack/main.cpp
)
dsacpp_configure_target(RedBlack)
target_compile_definitions(RedBlack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_REDBLACK
    DSA_STACK_VECTOR
)
