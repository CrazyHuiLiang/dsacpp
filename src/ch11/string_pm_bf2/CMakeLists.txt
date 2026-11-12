add_executable(string_pm_bf2
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bf2/pm_brute2.cpp
)
dsacpp_configure_target(string_pm_bf2)
target_compile_definitions(string_pm_bf2 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
