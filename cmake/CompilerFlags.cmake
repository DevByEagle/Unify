set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Common flags for all builds
if(MSVC)
    add_compile_options(
        /W4             # High warning level
    )
else()
    add_compile_options(
        -Wall -Wextra
    )
endif()