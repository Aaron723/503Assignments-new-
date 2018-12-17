cmake_minimum_required(VERSION 3.12)
project(homework9)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework9 main.cpp Package.h TwoDayPackage.h OvernightPackage.h Package.cpp TwoDayPackage.cpp OvernightPackage.cpp)