//
// Created by zemingz on 2024/9/13.
//

#include <iostream>
#include "DataStructures.h"

int main() {
    auto* list = new DoubleLink();
    list->push_front(1);
    list->push_front(2);
    list->push_front(3);
    list->print();
    delete list;
    return 0;
}