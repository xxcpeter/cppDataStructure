//
// Created by zemingz on 2024/9/13.
//

#include <iostream>
#include <cassert>
#include "DoubleList.h"


int main() {
    std::cout << "Start DoubleList Test" << std::endl;
    //        1  <->  2  <->  3
    // bool empty() const;
    // int front() const;
    // int back() const;
    // int size() const;
    //
    // int pop_front();
    // int pop_back();
    // void push_front(int v);
    // void push_back(int v);
    // void print_list() const;
    DoubleLink list;

    std::cout << "Test 1...";
    assert(list.empty() == true);
    std::cout << "Pass" << std::endl;

    std::cout << "Test 2...";
    try {
        auto v = list.front();
        std::cout << "Fail" << std::endl;
    } catch (std::range_error &e) {
        std::cout << "Pass" << std::endl;
    }

    std::cout << "Test 3...";
    list.push_front(1);
    assert(list.pop_front() == 1);
    std::cout << "Pass" << std::endl;

    std::cout << "Finish DoubleList Test" << std::endl;
    return 0;
}
