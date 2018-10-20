cmake_minimum_required(VERSION 3.12)
project(Assignmnet_3)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(./lib/googletest)

add_executable(Assignmnet_3 main.cpp Triangle/Triangle.h Triangle/Triangle.cpp Date/Date.h Date/Date.cpp)

add_executable(test ./test/main_test.cpp test/Triangle_test.cpp test/Date_test.cpp)

target_include_directories(test PUBLIC ./lib/googletest/include)
target_link_libraries(test gtest gtest_main)