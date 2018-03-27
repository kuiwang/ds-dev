cmake_minimum_required(VERSION 3.9)
project(ds_dev)

set(CMAKE_CXX_STANDARD 14)

add_executable(ds_dev main.cpp basic.h sqlist.h singlelist.h doublelist.h sqlist.c)