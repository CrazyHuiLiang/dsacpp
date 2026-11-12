add_executable(lcs
    ${DSACPP_SOURCE_DIR}/ch01/lcs/lcsI.cpp
    ${DSACPP_SOURCE_DIR}/ch01/lcs/lcsM.cpp
    ${DSACPP_SOURCE_DIR}/ch01/lcs/lcsR.cpp
    ${DSACPP_SOURCE_DIR}/ch01/lcs/test.cpp
)
dsacpp_configure_target(lcs)
target_compile_definitions(lcs PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
