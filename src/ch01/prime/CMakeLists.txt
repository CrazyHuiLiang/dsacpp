add_executable(prime
    ${DSACPP_SOURCE_DIR}/ch01/prime/Eratosthenes.cpp
    ${DSACPP_SOURCE_DIR}/ch01/prime/main.cpp
    ${DSACPP_SOURCE_DIR}/ch01/prime/primeNLT.cpp
)
dsacpp_configure_target(prime)
target_compile_definitions(prime PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
