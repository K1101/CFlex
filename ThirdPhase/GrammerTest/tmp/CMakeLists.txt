cmake_minimum_required(VERSION 3.21)
project(tmp C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(tmp
        cppbison.tab.h
        cppBison5.tab.c
        cppmain.c
        lex.yy.c
        lex.yy.h)
