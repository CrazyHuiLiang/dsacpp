add_executable(string_pm_kmp
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kmp/pm_kmp.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kmp/pm_kmp_next.cpp
)
dsacpp_configure_target(string_pm_kmp)
target_compile_definitions(string_pm_kmp PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
