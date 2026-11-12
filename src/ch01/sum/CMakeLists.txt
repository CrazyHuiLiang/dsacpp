add_executable(sum
    ${DSACPP_COMMON_DIR}/UniPrint/print_int_array.cpp
    ${DSACPP_COMMON_DIR}/random/Shuffle.cpp
    ${DSACPP_COMMON_DIR}/reverse/reverse-iterative-1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/sum/main.cpp
    ${DSACPP_SOURCE_DIR}/ch01/sum/sum0.cpp
    ${DSACPP_SOURCE_DIR}/ch01/sum/sum1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/sum/sum2.cpp
)
dsacpp_configure_target(sum)
target_compile_definitions(sum PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
