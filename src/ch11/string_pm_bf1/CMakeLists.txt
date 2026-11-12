add_executable(string_pm_bf1
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bf1/pm_brute1.cpp
)
dsacpp_configure_target(string_pm_bf1)
target_compile_definitions(string_pm_bf1 PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
