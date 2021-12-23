//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_DOUBLELINK_H
#define DOUBLYLINKEDLIST_DOUBLELINK_H
#include "DoubleNode.h"

class DoubleLink {
public:
    DoubleLink();
    ~DoubleLink();
    bool empty() const;
    static int size() ;
    int front() const;
    int back() const;
    DoubleNode *head() const;
    int pop_front();
    int pop_back();
    void push_front(int v);
    void push_back(int v);
private:
    DoubleNode *m_head;
    DoubleNode *m_tail;
};
#endif //DOUBLYLINKEDLIST_DOUBLELINK_H
