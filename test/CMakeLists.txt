add_executable(DoubleNodeTest DoubleNodeTest.cpp)

target_link_libraries(DoubleNodeTest
        DoublyLinkedList)

add_test(NAME node-test COMMAND DoubleNodeTest)