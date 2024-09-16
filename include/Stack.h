//
// Created by zemingz on 2024/9/16.
//

#ifndef STACK_H
#define STACK_H


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
    void print();
private:
    struct Node {
        T v;
        Node* next;
        explicit Node(T v) : v(v), next(nullptr) {}
    };
    T* m_head;
};


#endif //STACK_H
