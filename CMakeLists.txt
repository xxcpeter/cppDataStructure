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


# Add Library
add_library(DoubleLinkedList
        STATIC
        src/DoubleNode.cpp
        src/DoubleList.cpp)
target_include_directories(DoubleLinkedList
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include)

add_library(Stack
        STATIC
        src/Stack.cpp)
target_include_directories(Stack
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include)


# Add Executable
add_executable(Main
        src/main.cpp)
target_link_libraries(Main
        PRIVATE
        DoubleLinkedList
        Stack)


# Test
enable_testing()

# Test 1: DoubleNodeTest
add_executable(DoubleNodeTest
        test/DoubleNodeTest.cpp)
target_link_libraries(DoubleNodeTest
        PRIVATE
        DoubleLinkedList)
add_test(NAME DoubleNodeTest
        COMMAND DoubleNodeTest)

# Test 2: DoubleListTest
add_executable(DoubleListTest
        test/DoubleListTest.cpp)
target_link_libraries(DoubleListTest
        PRIVATE
        DoubleLinkedList)
add_test(NAME DoubleListTest
        COMMAND DoubleListTest)
