cmake_minimum_required (VERSION 3.11 FATAL_ERROR)

project(rt)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    opengl_download
    URL https://github.com/glfw/glfw/releases/download/3.2.1/glfw-3.2.1.zip
)

FetchContent_GetProperties(sfml_download)

if(NOT opengl_download_POPULATED)
    FetchContent_Populate(opengl_download)
    add_subdirectory(${opengl_download_SOURCE_DIR} ${opengl_download_BINARY_DIR})
endif()

include_directories(${opengl_download_SOURCE_DIR}/include)

add_executable(rt
    src/main.cpp)

find_package (OpenGL REQUIRED)
target_link_libraries (rt ${OPENGL_LIBRARIES})

target_link_libraries(rt glfw)