cmake_minimum_required(VERSION 3.23)
project(ListaIndexada)

set(CMAKE_CXX_STANDARD 14)

include_directories(ListaIndexada)

add_executable(ListaIndexada
        DLists.cpp
        DLists.h
        ListaIndexada.cpp)
