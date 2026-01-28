cmake_minimum_required(VERSION 3.16.0)
project(xcxk.xe.init)

configure_file(
        ${CMAKE_SOURCE_DIR}/src/xcxk/xe/version.h.in
        ${CMAKE_CURRENT_SOURCE_DIR}/version.h
)

add_executable(xcxk.xe.init
        main.cpp
)

target_link_libraries(xcxk.xe.init PRIVATE
        spdlog
)

