cmake_minimum_required(VERSION 3.27)
project(Lab6 C)

set(CMAKE_C_STANDARD 11)

add_library(Lab6 STATIC functions.c
        main.c)
