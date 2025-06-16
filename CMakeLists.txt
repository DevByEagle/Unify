cmake_minimum_required(VERSION 3.16)
project(Unify)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(CompilerFlags)

set(CMAKE_SHARED_LIBRARY_PREFIX "")

add_subdirectory(Unify)
add_subdirectory(Sandbox)

enable_testing()
