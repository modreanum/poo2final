cmake_minimum_required(VERSION 3.24)
project(poo2final)

set(CMAKE_CXX_STANDARD 17)

add_executable(poo2final main.cpp client.cpp client_card.cpp product.cpp client_without_card.cpp REWARD_PROGRAM.cpp)
