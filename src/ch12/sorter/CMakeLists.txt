add_executable(sorter
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch01/factorial/fac_iterative.cpp
    ${DSACPP_SOURCE_DIR}/ch12/sorter/main.cpp
)
dsacpp_configure_target(sorter)
target_compile_definitions(sorter PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
