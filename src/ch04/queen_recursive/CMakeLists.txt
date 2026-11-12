add_executable(queen_recursive
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/collision.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_brute_force_1/displaySolution.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_recursive/main.cpp
    ${DSACPP_SOURCE_DIR}/ch04/queen_recursive/placeQueens.cpp
)
dsacpp_configure_target(queen_recursive)
target_compile_definitions(queen_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
