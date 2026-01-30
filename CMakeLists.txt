cmake_minimum_required(VERSION 3.16.0)

set(VERSION 0.0.0)

project(xcxk.xe VERSION ${VERSION})

include_directories(src)

add_subdirectory(src/spdlog)
add_subdirectory(src/xcxk/xe/core)
add_subdirectory(src/xcxk/xe/init)