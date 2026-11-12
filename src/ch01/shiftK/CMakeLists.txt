add_executable(shiftK
    ${DSACPP_COMMON_DIR}/UniPrint/print_int_array.cpp
    ${DSACPP_COMMON_DIR}/reverse/reverse-recursive.cpp
    ${DSACPP_SOURCE_DIR}/ch01/shiftK/main.cpp
    ${DSACPP_SOURCE_DIR}/ch01/shiftK/shift.cpp
    ${DSACPP_SOURCE_DIR}/ch01/shiftK/shift0.cpp
    ${DSACPP_SOURCE_DIR}/ch01/shiftK/shift1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/shiftK/shift2.cpp
)
dsacpp_configure_target(shiftK)
target_compile_definitions(shiftK PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
