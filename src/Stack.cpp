//
// Created by zemingz on 2024/9/16.
//

#include "Stack.h"
#include <iostream>


template<typename T>
Stack<T>::Stack() = default;

template<typename T>
Stack<T>::~Stack() {
    while (m_head != nullptr) {
        Node* temp = m_head;
        m_head = m_head->next;
        delete temp;
        temp = nullptr;
    }
}

template<typename T>
void Stack<T>::push(T v) {
    auto newNode = new Node<T>(v);
    newNode->next = m_head;
    m_head = newNode;
}

template<typename T>
T Stack<T>::pop() {
    if (m_head == nullptr) return nullptr;
    const T v = m_head->v;
    Node* tmp = m_head;
    m_head = m_head->next;
    delete tmp;
    tmp = nullptr;
    return v;
}

template<typename T>
T Stack<T>::top() {
    return m_head;
}

template<typename T>
bool Stack<T>::empty() {
    return m_head == nullptr;
}

template<typename T>
int Stack<T>::size() {
    int cnt = 0;
    Node* tmp = m_head;
    while (tmp != nullptr) {
        ++cnt;
        tmp = tmp->next;
    }
    return cnt;
}

template<typename T>
void Stack<T>::print() {
    Node* tmp = m_head;
    while (tmp != nullptr) {
        std::cout << tmp->v << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}
