add_executable(Fibonacci
    ${DSACPP_SOURCE_DIR}/ch01/fibonacci/Fib0.cpp
    ${DSACPP_SOURCE_DIR}/ch01/fibonacci/Fib1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/fibonacci/Fib2.cpp
    ${DSACPP_SOURCE_DIR}/ch01/fibonacci/main.cpp
)
dsacpp_configure_target(Fibonacci)
target_compile_definitions(Fibonacci PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
