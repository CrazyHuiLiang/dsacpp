add_executable(vector
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch02/vector/main.cpp
)
dsacpp_configure_target(vector)
target_compile_definitions(vector PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_COMPLHEAP
    DSA_STACK_LIST
)
