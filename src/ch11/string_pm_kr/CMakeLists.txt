add_executable(string_pm_kr
    ${DSACPP_COMMON_DIR}/string_pm/string_pm_test.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kr/pm_kr.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kr/pm_kr_check1by1.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kr/pm_kr_prepareDm.cpp
    ${DSACPP_SOURCE_DIR}/ch11/string_pm_kr/pm_kr_updateHash.cpp
)
dsacpp_configure_target(string_pm_kr)
target_compile_definitions(string_pm_kr PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
