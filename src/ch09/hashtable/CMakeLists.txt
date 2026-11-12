add_executable(hashtable
    ${DSACPP_COMMON_DIR}/UniPrint/print_HuffChar.cpp
    ${DSACPP_COMMON_DIR}/UniPrint/print_basic.cpp
    ${DSACPP_SOURCE_DIR}/ch01/prime/primeNLT.cpp
    ${DSACPP_SOURCE_DIR}/ch09/hashtable/main.cpp
)
dsacpp_configure_target(hashtable)
target_compile_definitions(hashtable PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
    DSA_STACK_LIST
)
