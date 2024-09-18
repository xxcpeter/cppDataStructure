//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <stdexcept>


template <typename T>
class DoublyList {
public:
    DoublyList();
    ~DoublyList();

    bool empty() const;
    T front() const;
    T back() const;
    int size() const;

    T pop_front();
    T pop_back();
    void push_front(T v);
    void push_back(T v);
    void print() const;
private:
    struct Node {
        T m_v;
        Node *m_prev;
        Node *m_next;
        Node(T v, Node *prev, Node *next) : m_v(v), m_prev(prev), m_next(next) {}
    };
    Node *m_head = nullptr;
    Node *m_tail = nullptr;
};


// Constructor of DoubleLinkList
template <typename T>
DoublyList<T>::DoublyList() : m_head(nullptr), m_tail(nullptr) {}

// Destructor of DoubleLinkList
template <typename T>
DoublyList<T>::~DoublyList() {
    while (m_head != nullptr) {
        Node *ptr = m_head;
        m_head = m_head->m_next;
        delete ptr;
        ptr = nullptr;
    }
}

// Pop out a DoubleNode at front
template <typename T>
T DoublyList<T>::pop_front() {
    if (empty()) throw std::underflow_error("Underflow: Cannot pop from an empty list.");
    const T v = m_head->m_v;
    Node *ptr = m_head;
    m_head = m_head->m_next;
    if (m_head != nullptr) m_head->m_prev = nullptr;
    else m_tail = nullptr;
    delete ptr;
    ptr = nullptr;
    return v;
}

// Pop out a DoubleNode at back
template <typename T>
T DoublyList<T>::pop_back() {
    if (empty()) throw std::underflow_error("Underflow: Cannot pop from an empty list.");
    const T v = m_tail->m_v;
    Node *ptr = m_tail;
    m_tail = m_tail->m_prev;
    if (m_tail != nullptr) m_tail->m_next = nullptr;
    else m_head = nullptr;
    delete ptr;
    ptr = nullptr;
    return v;
}

// Push in a DoubleNode at front
template <typename T>
void DoublyList<T>::push_front(const T v) {
    auto *newNode = new Node(v, nullptr, nullptr);
    if (empty()) {
        m_head = newNode;
        m_tail = m_head;
    } else {
        m_head->m_prev = newNode;
        newNode->m_next = m_head;
        m_head = newNode;
    }
}

// Push in a DoubleNode at back
template <typename T>
void DoublyList<T>::push_back(const T v) {
    auto *newNode = new Node(v, nullptr, nullptr);
    if (empty()) {
        m_head = newNode;
        m_tail = m_head;
    } else {
        m_tail->m_next = newNode;
        newNode->m_prev = m_tail;
        m_tail = newNode;
    }
}

// Return if the DoubleLink is empty
template <typename T>
bool DoublyList<T>::empty() const {
    return m_head == nullptr;
}

// Return the size of DoubleList
template <typename T>
int DoublyList<T>::size() const {
    int cnt = 0;
    const Node *ptr = m_head;
    while (ptr->m_next != nullptr) {
        ++cnt;
        ptr = ptr->m_next;
    }
    return cnt;
}

// Return the value of head
template <typename T>
T DoublyList<T>::front() const {
    if (empty()) throw std::range_error("Range: The list is empty.");
    return m_head->m_v;
}

// Return the value of tail
template <typename T>
T DoublyList<T>::back() const {
    if (empty()) throw std::range_error("Range: The list is empty.");
    return m_tail->m_v;
}

// PrT the DoubleList
template <typename T>
void DoublyList<T>::print() const {
    const Node *ptr = m_head;
    while (ptr != nullptr) {
        std::cout << ptr->m_v << " ";
        ptr = ptr->m_next;
    }
    std::cout << std::endl;
}


#endif //DOUBLYLIST_H
