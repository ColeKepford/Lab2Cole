cmake_minimum_required(VERSION 3.14)

project(Lab2Cole VERSION 1.0)

SET(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(lib)
add_subdirectory(test_lib)
target_link_libraries(${PROJECT_NAME} lib)

if (NOT googletest) # is googletest defined if already built?
	include(FetchContent)
	FetchContent_Declare(
		googletest
		# Specify the commit you depend on and update it regularly.
		URL https://github.com/google/googletest/archive/refs/heads/master.zip
	)
	# For Windows: Prevent overriding the parent project's compiler/linker settings
	set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
	FetchContent_MakeAvailable(googletest)
endif()

add_test(NAME test COMMAND ${PROJECT_NAME})

# post build command
add_custom_command(
     TARGET ${PROJECT_NAME}  
     COMMENT "Run tests"
     POST_BUILD 
     COMMAND ${PROJECT_NAME}
)
