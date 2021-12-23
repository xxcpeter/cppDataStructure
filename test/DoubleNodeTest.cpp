//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include <cassert>
#include "DoubleNode.h"
using namespace std;


int main() {
    cout << "DoubleNode Test" << endl;
    //        1  <->  2  <->  3
    DoubleNode node1(1, nullptr, nullptr);
    DoubleNode node2(2, &node1, nullptr);
    DoubleNode node3(3, &node2, &node1);
    node1.set_prev(&node3);
    node1.set_next(&node2);
    node2.set_prev(&node3);
    assert(node1.value() == 1);
    assert(node2.value() == 2);
    assert(node3.value() == 3);
    assert(node1.prev() == &node3);
    assert(node2.prev() == &node1);
    assert(node3.prev() == &node2);
    assert(node1.next() == &node2);
    assert(node2.next() == &node3);
    assert(node3.next() == &node1);
    return 0;
}
