add_executable(string_pm_bm_bc+gs
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bm_bc/pm_bm_buildBC.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bm_bc+gs/pm_bm_bc+gs.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_bm_bc+gs/pm_bm_buildGS.cpp
)
dsacpp_configure_target(string_pm_bm_bc+gs)
target_compile_definitions(string_pm_bm_bc+gs PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
