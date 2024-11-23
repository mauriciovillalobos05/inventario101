cmake_minimum_required(VERSION 3.29)
project(inventario)

set(CMAKE_CXX_STANDARD 20)

add_executable(inventario main.cpp
        inventory.cpp
        inventory.h
        History.cpp
        History.h)
