cmake_minimum_required(VERSION 3.23)
project(8_Class)

set(CMAKE_CXX_STANDARD 14)

include_directories(T1)

add_executable(T1
        T1/Circle.cpp
        T1/Circle.h
        T1/main.cpp)
add_executable(T2
        T2/main.cpp
        T2/account.cpp
        T2/account.h)
add_executable(T3
        T3/main.cpp
        T3/LongLongInt.cpp
        T3/LongLongInt.h)
add_executable(T4
        T4/main.cpp
        T4/clock.cpp
        T4/clock.h)
add_executable(T5
        T5/main.cpp
        T5/mystack.cpp
        T5/mystack.h)
