file(GLOB_RECURSE ENGINE_SRC CONFIGURE_DEPENDS Source/*.cpp)
file(GLOB_RECURSE ENGINE_HDR CONFIGURE_DEPENDS Source/*.h)

add_library(UnifyEngine STATIC ${ENGINE_SRC} ${ENGINE_HDR})

target_include_directories(UnifyEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include)

# target_precompile_headers(UnifyEngine PRIVATE Incude/pch.h)

set_target_properties(UnifyEngine PROPERTIES POSITION_INDEPENDENT_CODE ON)
