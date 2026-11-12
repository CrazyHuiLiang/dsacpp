add_executable(SMMH
    ${DSACPP_COMMON_DIR}/DEPQ/DEPQ_Test.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
)
dsacpp_configure_target(SMMH)
target_compile_definitions(SMMH PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_DEPQ_SMMH
    DSA_STACK_VECTOR
)
