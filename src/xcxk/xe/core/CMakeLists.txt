cmake_minimum_required(VERSION 3.16.0)
project(xcxk.xe.core VERSION ${VERSION})

configure_file(
        ${CMAKE_SOURCE_DIR}/src/xcxk/xe/version.h.in
        ${CMAKE_CURRENT_SOURCE_DIR}/version.h
)

add_library(xcxk.xe.core SHARED
        model/model.cpp
        core.cpp
)

target_link_libraries(xcxk.xe.core PRIVATE
        spdlog
)