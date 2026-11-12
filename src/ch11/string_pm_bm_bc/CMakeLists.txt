add_executable(string_pm_bm_bc
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bm_bc/pm_bm_bc.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bm_bc/pm_bm_buildBC.cpp
)
dsacpp_configure_target(string_pm_bm_bc)
target_compile_definitions(string_pm_bm_bc PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
