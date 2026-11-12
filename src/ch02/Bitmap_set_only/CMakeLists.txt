add_executable(Bitmap_set_only
    ${DSACPP_SOURCE_DIR}/ch02/Bitmap_set_only/main_O1_init_set_only.cpp
)
dsacpp_configure_target(Bitmap_set_only)
target_compile_definitions(Bitmap_set_only PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
