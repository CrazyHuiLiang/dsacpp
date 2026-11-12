add_executable(PQ_BinHeap
    ${DSACPP_COMMON_DIR}/PQ/PQ_Test.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
)
dsacpp_configure_target(PQ_BinHeap)
target_compile_definitions(PQ_BinHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_COMPLHEAP
    DSA_STACK_VECTOR
)
