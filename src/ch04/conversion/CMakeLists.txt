add_executable(conversion
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch04/conversion/convert.cpp
    ${DSACPP_SOURCE_DIR}/ch04/conversion/main.cpp
)
dsacpp_configure_target(conversion)
target_compile_definitions(conversion PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
