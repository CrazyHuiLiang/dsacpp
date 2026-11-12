add_executable(Splay
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch07/splay/main.cpp
)
dsacpp_configure_target(Splay)
target_compile_definitions(Splay PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
