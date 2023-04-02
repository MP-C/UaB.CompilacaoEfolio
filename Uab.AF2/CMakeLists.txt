cmake_minimum_required(VERSION 3.20)
project(UaB.AF2)

set(CMAKE_CXX_STANDARD 14)
find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)

add_executable(AF2 main.cpp; analisador_lexico.l; analisador_lexico.cpp)
