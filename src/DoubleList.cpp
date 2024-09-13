//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include "DoubleList.h"
#include "Exception.h"

// Constructor of DoubleLink
DoubleLink::DoubleLink() : m_head(nullptr), m_tail(nullptr) {}

// Destructor of DoubleLink
DoubleLink::~DoubleLink() {
    DoubleNode* ptr = m_head;
    while (m_head != nullptr) {
        m_head = m_head->next();
        delete ptr;
        ptr = m_head;
    }
}

// Pop out a DoubleNode at front
int DoubleLink::pop_front() {
    if (empty()) throw underflow();
    const int v = m_head->value();
    DoubleNode *ptr = m_head;
    m_head = m_head->next();
    delete ptr;
    return v;
}

// Pop out a DoubleNode at back
int DoubleLink::pop_back() {
    if (empty()) throw underflow();
    const int v = m_tail->value();
    DoubleNode *ptr = m_tail;
    m_tail = m_tail->prev();
    delete ptr;
    return v;
}

// Push in a DoubleNode at front
void DoubleLink::push_front(const int v) {
    auto* newNode = new DoubleNode(v, nullptr, nullptr);
    if (empty()) {
        m_head = newNode;
        m_tail = m_head;
    } else {
        m_head->set_prev(newNode);
        newNode->set_next(m_head);
        m_head = newNode;
    }
}

// Push in a DoubleNode at back
void DoubleLink::push_back(const int v) {
    auto* newNode = new DoubleNode(v, nullptr, nullptr);
    if (empty()) {
        m_head = newNode;
        m_tail = m_head;
    } else {
        m_tail->set_next(newNode);
        newNode->set_prev(m_tail);
        m_tail = newNode;
    }
}

// Return if the DoubleLink is empty
bool DoubleLink::empty() const {
    return m_head == nullptr;
}

// Return the size of DoubleList
int DoubleLink::size() const {
    if (m_head == nullptr) return 0;
    else {
        int cnt = 1;
        const DoubleNode *ptr = m_head;
        while (ptr->next() != nullptr) {
            ptr = ptr->next();
            cnt++;
        }
        return cnt;
    }
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

// Print the DoubleList
void DoubleLink::print_list() const {
    const DoubleNode *ptr = m_head;
    while (ptr != nullptr) {
        std::cout << ptr->value() << " ";
        ptr = ptr->next();
    }
    std::cout << std::endl;
}
