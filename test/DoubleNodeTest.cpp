//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include <cassert>
#include "DoubleNode.h"
using namespace std;


int main() {
    cout << "Start DoubleNode Test" << endl;
    //        1  <->  2  <->  3
    DoubleNode node1(1, nullptr, nullptr);
    DoubleNode node2(2, &node1, nullptr);
    DoubleNode node3(3, &node2, &node1);
    node1.set_prev(&node3);
    node1.set_next(&node2);
    node2.set_next(&node3);
    cout << "Testing node1 value..." << endl;
    assert(node1.value() == 1);
    cout << "Testing node2 value..." << endl;
    assert(node2.value() == 2);
    cout << "Testing node3 value..." << endl;
    assert(node3.value() == 3);
    cout << "Testing node1 prev..." << endl;
    assert(node1.prev() == &node3);
    cout << "Testing node2 prev..." << endl;
    assert(node2.prev() == &node1);
    cout << "Testing node3 prev..." << endl;
    assert(node3.prev() == &node2);
    cout << "Testing node1 next..." << endl;
    assert(node1.next() == &node2);
    cout << "Testing node2 next..." << endl;
    assert(node2.next() == &node3);
    cout << "Testing node3 next..." << endl;
    assert(node3.next() == &node1);
    cout << "Finish DoubleNode Test";
    return 0;
}
