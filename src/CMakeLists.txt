add_library(DoublyLinkedList
        DoubleLinkedList/DoubleLink.cpp
        DoubleLinkedList/DoubleNode.cpp)

target_include_directories(DoublyLinkedList
        PUBLIC ../include)