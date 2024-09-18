# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(DS)

# Set C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED 20)

# Set path
set(EXECUTABLE_OUTPUT_DIRECTORY
        ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_DIRECTORY
        ${PROJECT_SOURCE_DIR}/lib)


# Add Headers
include_directories(${PROJECT_SOURCE_DIR}/include)


# Add Executable
add_executable(Main
        src/main.cpp)


# Test
enable_testing()

# Test 1: DoublyList Test
add_executable(DoublyListTest
        ${PROJECT_SOURCE_DIR}/test/DoublyList_test.cpp)
add_test(NAME DoublyListTest
        COMMAND DoublyListTest)

# Test 2: Stack Test
add_executable(StackTest
        ${PROJECT_SOURCE_DIR}/test/Stack_test.cpp)
add_test(NAME StackTest
        COMMAND StackTest)
