
cmake_minimum_required(VERSION 3.4.1)

add_library(modmenu SHARED
    cpp/main.cpp
    cpp/Menu.cpp
    cpp/Hook.cpp
    cpp/Memory.cpp
)

include_directories(cpp/Includes)
