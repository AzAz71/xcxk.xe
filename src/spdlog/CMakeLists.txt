cmake_minimum_required(VERSION 3.16.0)
project(spdlog C CXX)

file(GLOB_RECURSE spdlog_SOURCES
"${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
"${CMAKE_CURRENT_SOURCE_DIR}/*.c")

add_library(spdlog SHARED ${spdlog_SOURCES}
        ../xcxk/xe/init/main.cpp)
target_compile_definitions(spdlog PUBLIC SPDLOG_COMPILED_LIB)

target_include_directories(spdlog PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/
)

target_link_libraries(spdlog rt pthread)

