add_executable(bitmap
    ${DSACPP_SOURCE_DIR}/ch02/BitMap/main.cpp
)
dsacpp_configure_target(bitmap)
target_compile_definitions(bitmap PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
