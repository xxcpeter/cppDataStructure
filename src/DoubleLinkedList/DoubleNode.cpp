//
// Created by zhuangzm on 2021/12/13.
//

#include "DoubleLinkedList/DoubleNode.h"

// Constructor of DoubleNode
template<class T>
DoubleNode<T>::DoubleNode(T v, DoubleNode *p, DoubleNode *n) : m_value(v), m_prev(p), m_next(n) {}

// Return the prev DoubleNode
template<class T>
template<class T1>
DoubleNode<T1> *DoubleNode<T>::prev() const {
    return m_prev;
}

// Return the next DoubleNode
template<class T>
template<class T1>
DoubleNode<T1> *DoubleNode<T>::next() const {
    return m_next;
}

// Return the value of this DoubleNode
template<class T>
T DoubleNode<T>::value() const {
    return m_value;
}

// Set the value to this DoubleNode
template<class T>
void DoubleNode<T>::set_value(T v) {
    this->m_value = v;
}

// Set the node as prev DoubleNode
template<class T>
template<class T1>
void DoubleNode<T>::set_prev(DoubleNode<T1> *n) {
    this->m_prev = n;
}

// Set the node as next DoubleNode
template<class T>
template<class T1>
void DoubleNode<T>::set_next(DoubleNode<T1> *n) {
    this->m_next = n;
}