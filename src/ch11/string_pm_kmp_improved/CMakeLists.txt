add_executable(string_pm_kmp_improved
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kmp/pm_kmp.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kmp_improved/pm_kmp_next_improved.cpp
)
dsacpp_configure_target(string_pm_kmp_improved)
target_compile_definitions(string_pm_kmp_improved PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
