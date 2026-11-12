add_executable(binTree
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch05/binTree/main.cpp
)
dsacpp_configure_target(binTree)
target_compile_definitions(binTree PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
