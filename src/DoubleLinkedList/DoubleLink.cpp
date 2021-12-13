//
// Created by zhuangzm on 2021/12/13.
//

#include <iostream>
#include "DoubleLinkedList/DoubleLink.h"
#include "Exception.h"

// Constructor of DoubleLink
template<class T>
DoubleLink<T>::DoubleLink() {
    m_head = nullptr;
    m_tail = nullptr;
}

// Deconstructor of DoubleLink
template<class T>
DoubleLink<T>::~DoubleLink() {
    while (!empty()) {
        pop_front();
    }
}

// Pop out a DoubleNode at front
template<class T>
T DoubleLink<T>::pop_front() {
    T v = m_head->value();
    DoubleNode<T> *ptr = m_head;
    m_head = m_head->next();
    delete ptr;
    return v;
}

// Pop out a DoubleNode at back
template<class T>
T DoubleLink<T>::pop_back() {
    T v = m_tail->value();
    DoubleNode<T> *ptr = m_tail;
    m_tail = m_tail->prev();
    delete ptr;
    return v;
}

// Push in a DoubleNode at front
template<class T>
void DoubleLink<T>::push_front(T v) {
    m_head = new DoubleNode<T>(v, nullptr, m_head);
    m_head->next();
}

// Push in a DoubleNode at back
template<class T>
void DoubleLink<T>::push_back(T v) {
    m_tail = new DoubleNode<T>(v, m_tail, nullptr);
}

// Return if the DoubleLink is empty
template<class T>
bool DoubleLink<T>::empty() const {
    return m_head == m_tail;
}

// Return the size of DoubleList
template<class T>
int DoubleLink<T>::size() const {
    return 0;
}

// Return the value of head
template<class T>
T DoubleLink<T>::front() const {
    if (empty()) throw underflow();
    return m_head->value();
}

// Return the value of tail
template<class T>
T DoubleLink<T>::back() const {
    if (empty()) throw underflow();
    return m_tail->value();
}

template<class T>
DoubleNode<T> *DoubleLink<T>::head() const {
    return m_head;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
