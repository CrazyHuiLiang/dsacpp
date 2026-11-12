add_executable(countones
    ${DSACPP_SOURCE_DIR}/ch01/countOnes/countOnes.cpp
    ${DSACPP_SOURCE_DIR}/ch01/countOnes/countOnes_1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/countOnes/countOnes_2.cpp
    ${DSACPP_SOURCE_DIR}/ch01/countOnes/main.cpp
)
dsacpp_configure_target(countones)
target_compile_definitions(countones PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
