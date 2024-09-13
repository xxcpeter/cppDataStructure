//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H
#include "DoubleNode.h"

class DoubleLink {
public:
    DoubleLink();
    ~DoubleLink();

    bool empty() const;
    int front() const;
    int back() const;
    int size() const;

    int pop_front();
    int pop_back();
    void push_front(int v);
    void push_back(int v);
    void print_list() const;
private:
    DoubleNode *m_head;
    DoubleNode *m_tail;
};
#endif //DOUBLE_LIST_H
