cmake_minimum_required(VERSION 3.16)
project(dsacpp LANGUAGES CXX)

# 在 VS 等 IDE 中启用解决方案文件夹（配合各目标的 FOLDER 属性实现按章节分组显示）
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 输出目录：与原有工程保持一致，按配置和项目名分目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/_executable)

# Windows 下默认使用静态运行时 (/MT /MTd)，与原有 Release 行为一致
# 如需动态运行时 (/MD /MDd)，注释掉下面两行即可
if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

# 全局编译选项（MSVC 关闭安全异常、启用多处理器编译）
if(MSVC)
    add_compile_options(/EHsc /MP /wd4996)
endif()

add_subdirectory(src)
