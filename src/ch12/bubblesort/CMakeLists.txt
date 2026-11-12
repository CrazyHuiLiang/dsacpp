add_executable(bubblesort
    ${DSACPP_COMMON_DIR}/UniPrint/print_int_array.cpp
    ${DSACPP_COMMON_DIR}/random/Shuffle.cpp
    ${DSACPP_SOURCE_DIR}/ch12/bubblesort/bubble.cpp
    ${DSACPP_SOURCE_DIR}/ch12/bubblesort/bubble1A.cpp
    ${DSACPP_SOURCE_DIR}/ch12/bubblesort/bubble1B.cpp
    ${DSACPP_SOURCE_DIR}/ch12/bubblesort/bubble2.cpp
    ${DSACPP_SOURCE_DIR}/ch12/bubblesort/main.cpp
)
dsacpp_configure_target(bubblesort)
target_compile_definitions(bubblesort PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
