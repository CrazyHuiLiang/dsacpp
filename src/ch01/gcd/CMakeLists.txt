add_executable(gcd
    ${DSACPP_SOURCE_DIR}/ch01/gcd/gcd_chinese.cpp
    ${DSACPP_SOURCE_DIR}/ch01/gcd/gcd_euclidean.cpp
    ${DSACPP_SOURCE_DIR}/ch01/gcd/main.cpp
)
dsacpp_configure_target(gcd)
target_compile_definitions(gcd PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
