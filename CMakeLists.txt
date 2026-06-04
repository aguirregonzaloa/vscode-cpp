cmake_minimum_required(VERSION 3.27.1)

project(hello CXX)

add_executable(Hello main.cpp)

target_compile_features(Hello PRIVATE cxx_std_20)