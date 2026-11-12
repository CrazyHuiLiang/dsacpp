add_executable(laby
    ${DSACPP_SOURCE_DIR}/ch04/laby/main.cpp
)
dsacpp_configure_target(laby)
target_compile_definitions(laby PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
