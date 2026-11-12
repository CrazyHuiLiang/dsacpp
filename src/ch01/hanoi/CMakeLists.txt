add_executable(hanoi
    ${DSACPP_SOURCE_DIR}/ch01/hanoi/display.cpp
    ${DSACPP_SOURCE_DIR}/ch01/hanoi/hanoi.cpp
    ${DSACPP_SOURCE_DIR}/ch01/hanoi/main.cpp
    ${DSACPP_SOURCE_DIR}/ch01/hanoi/move_disk.cpp
)
dsacpp_configure_target(hanoi)
target_compile_definitions(hanoi PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
