file(GLOB_RECURSE SANDBOX_SOURCES CONFIGURE_DEPENDS "src/**.cpp")

add_executable(Sandbox ${SANDBOX_SOURCES})

target_link_libraries(Sandbox PRIVATE Unify)
