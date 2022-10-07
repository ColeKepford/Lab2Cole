cmake_minimum_required(VERSION 3.14)

project(test_lib VERSION 1.0)

add_executable(${PROJECT_NAME} test.cpp)
target_link_libraries(${PROJECT_NAME} 
	lib
	gtest_main
)

