cmake_minimum_required(VERSION 3.22)

project(iFellow)

include_directories(include)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -O0 -g")

add_executable(main src/task1.cpp src/task2.cpp src/task3.cpp src/main.cpp)
