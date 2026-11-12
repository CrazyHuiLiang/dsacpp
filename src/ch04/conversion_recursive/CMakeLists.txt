add_executable(conversion_recursive
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch04/conversion/main.cpp
    ${DSACPP_SOURCE_DIR}/ch04/conversion_recursive/convert.cpp
)
dsacpp_configure_target(conversion_recursive)
target_compile_definitions(conversion_recursive PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_VECTOR
)
