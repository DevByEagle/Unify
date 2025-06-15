file(GLOB_RECURSE EDITOR_SRC CONFIGURE_DEPENDS Source/*.cpp)
file(GLOB_RECURSE EDITOR_HDR CONFIGURE_DEPENDS Source/*.h)

add_executable(UnifyEditor ${EDITOR_SRC} ${EDITOR_HDR})

target_include_directories(UnifyEditor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include)

target_link_libraries(UnifyEditor PRIVATE UnifyEngine)
