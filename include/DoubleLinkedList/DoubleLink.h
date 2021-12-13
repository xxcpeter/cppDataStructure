//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_DOUBLELINK_H
#define DOUBLYLINKEDLIST_DOUBLELINK_H
#include "DoubleNode.h"

template<class T>
class DoubleLink {
public:
    DoubleLink();
    ~DoubleLink();
    bool empty() const;
    int size() const;
    T front() const;
    T back() const;
    DoubleNode<T> *head() const;
    T pop_front();
    T pop_back();
    void push_front(T v);
    void push_back(T v);
private:
    DoubleNode<T> *m_head;
    DoubleNode<T> *m_tail;
};
#endif //DOUBLYLINKEDLIST_DOUBLELINK_H
