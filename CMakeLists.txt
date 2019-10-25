cmake_minimum_required(VERSION 3.15)
project(ZooManagement)

set(CMAKE_CXX_STANDARD 14)

add_executable(ZooManagement main.cpp MenuManager.cpp MenuManager.h ZooManager.cpp ZooManager.h Animal.cpp Animal.h Zebra.cpp Zebra.h)