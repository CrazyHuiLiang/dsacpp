add_executable(greatest_slice
    ${DSACPP_SOURCE_DIR}/ch01/sum/sum2.cpp
    ${DSACPP_SOURCE_DIR}/ch01/greatest_slice/gs_bf.cpp
    ${DSACPP_SOURCE_DIR}/ch01/greatest_slice/gs_dc.cpp
    ${DSACPP_SOURCE_DIR}/ch01/greatest_slice/gs_ic.cpp
    ${DSACPP_SOURCE_DIR}/ch01/greatest_slice/gs_ls.cpp
    ${DSACPP_SOURCE_DIR}/ch01/greatest_slice/test.cpp
)
dsacpp_configure_target(greatest_slice)
target_compile_definitions(greatest_slice PRIVATE
    $<$<CONFIG:Debug>:_DEBUG>
    $<$<CONFIG:Release>:NDEBUG>
    _CONSOLE
)
