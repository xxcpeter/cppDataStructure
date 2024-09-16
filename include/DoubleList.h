//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_LIST_H
#define DOUBLYLINKEDLIST_LIST_H

#include "DoubleNode.h"


template <typename T>
class DoubleLink {
public:
    DoubleLink();
    ~DoubleLink();

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
    DoubleNode<T> *m_head;
    DoubleNode<T> *m_tail;
};


#endif //DOUBLYLINKEDLIST_LIST_H
