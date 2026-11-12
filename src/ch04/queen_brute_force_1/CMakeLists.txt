add_executable(queen_brute_force_1
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/5queens.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/collision.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/displaySolution.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/main.cpp
)
dsacpp_configure_target(queen_brute_force_1)
target_compile_definitions(queen_brute_force_1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
