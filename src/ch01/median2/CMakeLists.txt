add_executable(median2
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_COMMON_DIR}/random/randomSortedVector.cpp
    ${DSACPP_SOURCE_DIR}/ch01/median2/main.cpp
)
dsacpp_configure_target(median2)
target_compile_definitions(median2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
