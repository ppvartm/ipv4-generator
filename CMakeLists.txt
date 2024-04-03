cmake_minimum_required(VERSION 3.11)

project(ip_generator CXX)
set(CMAKE_CXX_STANDARD 20)

add_library(generator_lib SHARED
              src/my_lib/ip_generator.h
              src/my_lib/ip_generator.cpp
)

add_executable(generator src/main.cpp)

target_link_libraries(generator PRIVATE generator_lib)
