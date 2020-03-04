cmake_minimum_required (VERSION 3.10)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set (SOURCE_FILES
    main.cpp
)

include_directories (filesystem/include)

add_executable (
    std-fs
    ${SOURCE_FILES}
)

add_executable (
    alt-fs
    ${SOURCE_FILES}
)

target_compile_definitions (alt-fs PUBLIC USE_GHC_FS)
