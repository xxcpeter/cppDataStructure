//
// Created by zemingz on 2024/9/16.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>


template <typename T>
class Stack {
public:
    Stack();
    ~Stack();

    void push(T v);
    T pop();
    T top();

    bool empty();
    int size();

    template<typename T1>
    friend std::ostream& operator<<(std::ostream& os, const Stack<T1>& stack);
private:
    struct Node {
        T m_v;
        Node *m_next;
        explicit Node(T v) : m_v(v), m_next(nullptr) {}
    };
    Node *m_head = nullptr;
};


// Constructor of Stack
template<typename T>
Stack<T>::Stack() = default;

// Destructor of Stack
template<typename T>
Stack<T>::~Stack() {
    while (m_head != nullptr) {
        Node *ptr = m_head;
        m_head = m_head->m_next;
        delete ptr;
        ptr = nullptr;
    }
}

// Push a new node to the stack
template<typename T>
void Stack<T>::push(T v) {
    auto newNode = new Node(v);
    if (m_head != nullptr) newNode->m_next = m_head;
    m_head = newNode;
}

// Pop out a node from the stack
template<typename T>
T Stack<T>::pop() {
    if (m_head == nullptr) throw std::underflow_error("Underflow: Cannot pop from an empty stack.");
    const T v = m_head->m_v;
    auto ptr = m_head;
    m_head = m_head->m_next;
    delete ptr;
    ptr = nullptr;
    return v;
}


// Get the top node of the stack
template<typename T>
T Stack<T>::top() {
    if (m_head == nullptr) throw std::range_error("Range Error: Cannot get top from an empty stack.");
    else return m_head;
}

// Check if the stack is empty
template<typename T>
bool Stack<T>::empty() {
    return m_head == nullptr;
}

// Get the size of the stack
template<typename T>
int Stack<T>::size() {
    int cnt = 0;
    auto ptr = m_head;
    while (ptr != nullptr) {
        ++cnt;
        ptr = ptr->m_next;
    }
    return cnt;
}

// Overload the operator << for Stack
template<typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& stack) {
    auto ptr = stack.m_head;
    while (ptr != nullptr) {
        os << ptr->m_v << " ";
        ptr = ptr->m_next;
    }
    return os;
}


#endif //STACK_H
