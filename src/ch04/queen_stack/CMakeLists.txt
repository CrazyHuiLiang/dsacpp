add_executable(queen_stack
    ${DSACPP_SOURCE_DIR}/ch04/queen_stack/displayProgress.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_stack/main.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_stack/placeQueens.cpp
)
dsacpp_configure_target(queen_stack)
target_compile_definitions(queen_stack PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
