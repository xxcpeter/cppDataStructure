//
// Created by zemingz on 2024/9/17.
//

#include <iostream>
#include <cassert>
#include "DataStructures.h"


int main() {
    std::cout << "Start Stack Test..." << std::endl;
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(123);
    std::cout << stack << std::endl;
    assert(stack.pop() == 123);
    assert(stack.pop() == 3);
    assert(stack.pop() == 2);
    assert(stack.pop() == 1);
    try {
        stack.pop();
    } catch (std::underflow_error &e) {
        std::cout << "Stack Test Passed..." << std::endl;
    }
}
