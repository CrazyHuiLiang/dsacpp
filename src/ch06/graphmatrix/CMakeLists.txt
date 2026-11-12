add_executable(graphMatrix
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_COMMON_DIR}/graph/Graph_Test.cpp
)
dsacpp_configure_target(graphMatrix)
target_compile_definitions(graphMatrix PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
