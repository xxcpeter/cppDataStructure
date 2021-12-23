//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_DOUBLENODE_H
#define DOUBLYLINKEDLIST_DOUBLENODE_H


class DoubleNode {
public:
    DoubleNode(int v, DoubleNode *p, DoubleNode *n);
    DoubleNode *prev() const;
    DoubleNode *next() const;
    int value() const;
    void set_value(int v);
    void set_prev(DoubleNode *n);
    void set_next(DoubleNode *n);
private:
    int m_value;
    DoubleNode *m_prev;
    DoubleNode *m_next;
};

#endif //DOUBLYLINKEDLIST_DOUBLENODE_H
