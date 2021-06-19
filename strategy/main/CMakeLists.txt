cmake_minimum_required(VERSION 3.1)
project(duck_simulator CXX)



set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -ggdb")
set(SRC_ROOT_DIR "../")
set(SRC_INCLUDE_DIR ${SRC_ROOT_DIR}/include)
set(APP_MAIN_DIR ${SRC_ROOT_DIR}/main)



add_executable(duck_simulator duck_simulator.cpp)
target_include_directories(duck_simulator PRIVATE ${SRC_INCLUDE_DIR} )
