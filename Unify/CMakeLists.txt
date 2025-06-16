project(Unify VERSION 1.0.0 LANGUAGES C CXX)

# === Sources ===
file(GLOB_RECURSE UNIFY_PUBLIC_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/Source/Public/*.h")
file(GLOB_RECURSE UNIFY_PRIVATE_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/Source/Private/*.h")
file(GLOB_RECURSE UNIFY_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/Source/Private/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/Source/Private/*.cpp"
)

# === Create shared library ===
add_library(Unify SHARED
    ${UNIFY_SOURCES}
    ${UNIFY_PUBLIC_HEADERS}
    ${UNIFY_PRIVATE_HEADERS}
)

# === Public & Private Headers ===
target_include_directories(Unify PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source/Public)
target_include_directories(Unify PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/Source/Private
    ${CMAKE_CURRENT_SOURCE_DIR}/Source/ThirdParty
)

# === Platform defines ===
if(WIN32)
    add_compile_definitions(UNIFY_BUILD_DLL)
endif()
