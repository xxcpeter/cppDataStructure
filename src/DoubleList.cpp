//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include "DoubleList.h"
#include "Exception.h"

// Constructor of DoubleLink
DoubleLink::DoubleLink() {
    m_head = nullptr;
    m_tail = nullptr;
}

// Deconstructor of DoubleLink
DoubleLink::~DoubleLink() {
    while (!empty()) {
        pop_front();
    }
}

// Pop out a DoubleNode at front
int DoubleLink::pop_front() {
    int v = m_head->value();
    DoubleNode *ptr = m_head;
    m_head = m_head->next();
    delete ptr;
    return v;
}

// Pop out a DoubleNode at back
int DoubleLink::pop_back() {
    int v = m_tail->value();
    DoubleNode *ptr = m_tail;
    m_tail = m_tail->prev();
    delete ptr;
    return v;
}

// Push in a DoubleNode at front
void DoubleLink::push_front(int v) {
    m_head = new DoubleNode(v, nullptr, m_head);
    m_head->next();
}

// Push in a DoubleNode at back
void DoubleLink::push_back(int v) {
    m_tail = new DoubleNode(v, m_tail, nullptr);
}

// Return if the DoubleLink is empty
bool DoubleLink::empty() const {
    return m_head == m_tail;
}

// Return the size of DoubleList
int DoubleLink::size() {
    return 0;
}

// Return the value of head
int DoubleLink::front() const {
    if (empty()) throw underflow();
    return m_head->value();
}

// Return the value of tail
int DoubleLink::back() const {
    if (empty()) throw underflow();
    return m_tail->value();
}

DoubleNode *DoubleLink::head() const {
    return m_head;
}
