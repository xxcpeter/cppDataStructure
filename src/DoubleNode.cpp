//
// Created by zhuangzm on 2021/12/13.
//

#include "DoubleNode.h"

// Constructor of DoubleNode
DoubleNode::DoubleNode(int v, DoubleNode *p, DoubleNode *n) : m_value(v), m_prev(p), m_next(n) {}

// Return the prev DoubleNode
DoubleNode *DoubleNode::prev() const {
    return m_prev;
}

// Return the next DoubleNode
DoubleNode *DoubleNode::next() const {
    return m_next;
}

// Return the value of this DoubleNode
int DoubleNode::value() const {
    return m_value;
}

// Set the value to this DoubleNode
void DoubleNode::set_value(int v) {
    this->m_value = v;
}

// Set the node as prev DoubleNode
void DoubleNode::set_prev(DoubleNode *n) {
    this->m_prev = n;
}

// Set the node as next DoubleNode
void DoubleNode::set_next(DoubleNode *n) {
    this->m_next = n;
}
