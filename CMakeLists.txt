cmake_minimum_required(VERSION 3.16)
project(Unify)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (MSVC)
    add_compile_options(/W4 /permissive- /MP)
else()
    add_compile_options(-Wall -Wextra 0Woedantic)
endif()

add_subdirectory(Engine)
add_subdirectory(Editor)
