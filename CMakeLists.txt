cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD_REQUIRED 11)
project(DS)

set(EXECUTABLE_OUTPUT_PATH
        ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH
        ${PROJECT_SOURCE_DIR}/lib)

add_library(DoubleLinkedList
        STATIC
        src/DoubleNode.cpp
        src/DoubleList.cpp)
target_include_directories(DoubleLinkedList
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include)

add_executable(DoubleNodeTest
        test/DoubleNodeTest.cpp)
target_link_libraries(DoubleNodeTest
        PRIVATE
        DoubleLinkedList)

enable_testing()
add_test(test_run
        ${PROJECT_SOURCE_DIR}/bin/DoubleNodeTest)