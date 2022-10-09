cmake_minimum_required(VERSION 3.23)
project(IndexList)

set(CMAKE_CXX_STANDARD 14)

include_directories(ListaIndexada)

add_executable(IndexList
        ListaIndexada/DLists.cpp
        ListaIndexada/DLists.h
        ListaIndexada/ListaIndexada.cpp)
