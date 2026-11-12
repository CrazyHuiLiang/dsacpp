add_executable(factorial
    ${DSACPP_SOURCE_DIR}/ch01/factorial/fac_iterative.cpp
    ${DSACPP_SOURCE_DIR}/ch01/factorial/fac_recursive.cpp
    ${DSACPP_SOURCE_DIR}/ch01/factorial/main.cpp
)
dsacpp_configure_target(factorial)
target_compile_definitions(factorial PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
