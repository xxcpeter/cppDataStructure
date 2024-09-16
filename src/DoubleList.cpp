//
// Created by zhuangzm on 2021/12/13.
//

#include "DoubleList.h"
#include <iostream>
#include <stdexcept>


// Constructor of DoubleLink
template <typename T>
DoubleLink<T>::DoubleLink() : m_head(nullptr), m_tail(nullptr) {}

// Destructor of DoubleLink
template <typename T>
DoubleLink<T>::~DoubleLink() {
    DoubleNode<T> *ptr = m_head;
    while (m_head != nullptr) {
        m_head = m_head->next();
        delete ptr;
        ptr = m_head;
    }
}

// Pop out a DoubleNode at front
template <typename T>
T DoubleLink<T>::pop_front() {
    if (empty()) throw std::underflow_error("Underflow: Cannot pop from an empty list.");
    const T v = m_head->value();
    DoubleNode<T> *ptr = m_head;
    m_head = m_head->next();
    if (m_head != nullptr) m_head->set_prev(nullptr);
    else m_tail = nullptr;
    delete ptr;
    ptr = nullptr;
    return v;
}

// Pop out a DoubleNode at back
template <typename T>
T DoubleLink<T>::pop_back() {
    if (empty()) throw std::underflow_error("Underflow: Cannot pop from an empty list.");
    const T v = m_tail->value();
    DoubleNode<T> *ptr = m_tail;
    m_tail = m_tail->prev();
    if (m_tail != nullptr) m_tail->set_next(nullptr);
    else m_head = nullptr;
    delete ptr;
    ptr = nullptr;
    return v;
}

// Push in a DoubleNode at front
template <typename T>
void DoubleLink<T>::push_front(const T v) {
    auto* newNode = new DoubleNode<T>(v, nullptr, nullptr);
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
template <typename T>
void DoubleLink<T>::push_back(const T v) {
    auto* newNode = new DoubleNode<T>(v, nullptr, nullptr);
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
template <typename T>
bool DoubleLink<T>::empty() const {
    return m_head == nullptr;
}

// Return the size of DoubleList
template <typename T>
int DoubleLink<T>::size() const {
    int cnt = 0;
    const DoubleNode<T> *ptr = m_head;
    while (ptr->next() != nullptr) {
        ++cnt;
        ptr = ptr->next();
    }
    return cnt;
}

// Return the value of head
template <typename T>
T DoubleLink<T>::front() const {
    if (empty()) throw std::range_error("Range: The list is empty.");
    return m_head->value();
}

// Return the value of tail
template <typename T>
T DoubleLink<T>::back() const {
    if (empty()) throw std::range_error("Range: The list is empty.");
    return m_tail->value();
}

// PrT the DoubleList
template <typename T>
void DoubleLink<T>::print() const {
    const DoubleNode<T> *ptr = m_head;
    while (ptr != nullptr) {
        std::cout << ptr->value() << " ";
        ptr = ptr->next();
    }
    std::cout << std::endl;
}
