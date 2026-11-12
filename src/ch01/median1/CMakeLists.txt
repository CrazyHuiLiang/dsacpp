add_executable(median1
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_COMMON_DIR}/random/randomSortedVector.cpp
    ${DSACPP_SOURCE_DIR}/ch01/median1/main.cpp
)
dsacpp_configure_target(median1)
target_compile_definitions(median1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
