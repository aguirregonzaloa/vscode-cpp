cmake_minimum_required(VERSION 3.27.1)

project(Hello LANGUAGES CXX)

# -----------------------
# Glob sources and headers
# -----------------------
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp
)

add_executable(Hello main.cpp ${SRC_FILES} ${HEADER_FILES})

target_compile_features(Hello PRIVATE cxx_std_20)

target_include_directories(Hello PRIVATE include)