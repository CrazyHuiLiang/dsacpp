add_executable(bitmap.hopcroft
    ${DSACPP_SOURCE_DIR}/ch02/BitMap/main.cpp
)
dsacpp_configure_target(bitmap.hopcroft)
target_compile_definitions(bitmap.hopcroft PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
