add_executable(PQ_leftHeap
    ${DSACPP_COMMON_DIR}/PQ/PQ_Test.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
)
dsacpp_configure_target(PQ_leftHeap)
target_compile_definitions(PQ_leftHeap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_PQ_LEFTHEAP
    DSA_STACK_LIST
)
