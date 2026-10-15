cmake_minimum_required(VERSION 3.20)
project(chip8 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(chip8_core STATIC src/core/chip8.cpp)
target_include_directories(chip8_core PUBLIC src/core)

add_executable(chip8 src/app/main.cpp)
target_link_libraries(chip8 PRIVATE chip8_core)