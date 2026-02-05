cmake_minimum_required(VERSION 3.16.0)
project(xcxk.xe VERSION ${VERSION})

configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/version.h.in
        ${CMAKE_CURRENT_SOURCE_DIR}/version.h
)

add_executable(xcxk.xe.init
        main.cpp
        init.cpp
        core/core.cpp
        model/model.cpp
)

target_include_directories(xcxk.xe.init PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(xcxk.xe.init PRIVATE
        spdlog
)

