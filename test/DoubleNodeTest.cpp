//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include <cassert>
#include "DoubleNode.h"


int main() {
    std::cout << "Start DoubleNode Test" << std::endl;
    //        1  <->  2  <->  3
    DoubleNode node1(1, nullptr, nullptr);
    DoubleNode node2(2, &node1, nullptr);
    DoubleNode node3(3, &node2, &node1);
    node1.set_prev(&node3);
    node1.set_next(&node2);
    node2.set_next(&node3);
    std::cout << "Testing node1 value..." << std::endl;
    assert(node1.value() == 1);
    std::cout << "Testing node2 value..." << std::endl;
    assert(node2.value() == 2);
    std::cout << "Testing node3 value..." << std::endl;
    assert(node3.value() == 3);
    std::cout << "Testing node1 prev..." << std::endl;
    assert(node1.prev() == &node3);
    std::cout << "Testing node2 prev..." << std::endl;
    assert(node2.prev() == &node1);
    std::cout << "Testing node3 prev..." << std::endl;
    assert(node3.prev() == &node2);
    std::cout << "Testing node1 next..." << std::endl;
    assert(node1.next() == &node2);
    std::cout << "Testing node2 next..." << std::endl;
    assert(node2.next() == &node3);
    std::cout << "Testing node3 next..." << std::endl;
    assert(node3.next() == &node1);
    std::cout << "Finish DoubleNode Test";
    return 0;
}
