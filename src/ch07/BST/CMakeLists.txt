add_executable(BST
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch07/BST/main.cpp
)
dsacpp_configure_target(BST)
target_compile_definitions(BST PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_DEBUG
    DSA_STACK_VECTOR
)
