add_executable(maxRect
    ${DSACPP_SOURCE_DIR}/ch01/maxRect/mr_BF.cpp
    ${DSACPP_SOURCE_DIR}/ch01/maxRect/mr_STACK.cpp
    ${DSACPP_SOURCE_DIR}/ch01/maxRect/mr_STACKS.cpp
    ${DSACPP_SOURCE_DIR}/ch01/maxRect/test.cpp
)
dsacpp_configure_target(maxRect)
target_compile_definitions(maxRect PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
