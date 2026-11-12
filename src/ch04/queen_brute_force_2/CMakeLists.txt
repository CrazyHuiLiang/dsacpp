add_executable(queen_brute_force_2
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/collision.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/displaySolution.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_2/2queens.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_2/3queens.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_2/4queens.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_2/5queens.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_2/main.cpp
)
dsacpp_configure_target(queen_brute_force_2)
target_compile_definitions(queen_brute_force_2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
