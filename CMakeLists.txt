cmake_minimum_required(VERSION 3.24)

project(Project CXX)

add_executable(Project Main.cpp)

target_compile_features(Project PUBLIC cxx_std_20)