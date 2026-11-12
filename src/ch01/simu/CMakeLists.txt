add_executable(simu
    ${DSACPP_SOURCE_DIR}/ch01/simu/bestWindow.cpp
    ${DSACPP_SOURCE_DIR}/ch01/simu/displayProgress.cpp
    ${DSACPP_SOURCE_DIR}/ch01/simu/main.cpp
    ${DSACPP_SOURCE_DIR}/ch01/simu/simu.cpp
)
dsacpp_configure_target(simu)
target_compile_definitions(simu PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
