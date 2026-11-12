add_executable(daxue
    ${DSACPP_SOURCE_DIR}/ch01/daxue/main.cpp
)
dsacpp_configure_target(daxue)
target_compile_definitions(daxue PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
