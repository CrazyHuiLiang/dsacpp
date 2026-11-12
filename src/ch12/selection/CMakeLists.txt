add_executable(selection
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch12/selection/main.cpp
)
dsacpp_configure_target(selection)
target_compile_definitions(selection PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
