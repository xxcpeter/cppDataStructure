//
// Created by zhuangzm on 2021/12/13.
//

#include "DoubleNode.h"


// Constructor of DoubleNode
template <typename T>
DoubleNode<T>::DoubleNode(T v, DoubleNode<T> *p, DoubleNode<T> *n) : m_value(v), m_prev(p), m_next(n) {}

// Destructor of DoubleNode
template <typename T>
DoubleNode<T>::~DoubleNode() = default;

// Return the prev DoubleNode
template <typename T>
DoubleNode<T> *DoubleNode<T>::prev() const {
    return m_prev;
}

// Return the next DoubleNode
template <typename T>
DoubleNode<T> *DoubleNode<T>::next() const {
    return m_next;
}

// Return the value of this DoubleNode
template <typename T>
T DoubleNode<T>::value() const {
    return m_value;
}

// Set the value to this DoubleNode
template <typename T>
void DoubleNode<T>::set_value(T v) {
    this->m_value = v;
}

// Set the node as prev DoubleNode
template <typename T>
void DoubleNode<T>::set_prev(DoubleNode<T> *n) {
    this->m_prev = n;
}

// Set the node as next DoubleNode
template <typename T>
void DoubleNode<T>::set_next(DoubleNode<T> *n) {
    this->m_next = n;
}
