cmake_minimum_required(VERSION 4.0)
project(dz1 C)

set(CMAKE_CXX_STANDARD 14)

add_executable(dz1 funs.c
        choice.c
        funs.h
        choice.h
        main.c)