add_executable(power
    ${DSACPP_SOURCE_DIR}/ch01/power/Power0.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/Power1.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/Power2-0-I.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/Power2-0-R.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/Power2-1-I.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/Power2-1-R.cpp
    ${DSACPP_SOURCE_DIR}/ch01/power/main.cpp
)
dsacpp_configure_target(power)
target_compile_definitions(power PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
