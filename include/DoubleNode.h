//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_NODE_H
#define DOUBLYLINKEDLIST_NODE_H

class DoubleNode {
public:
    DoubleNode(int v, DoubleNode *p, DoubleNode *n);
    int value() const;
    DoubleNode *prev() const;
    DoubleNode *next() const;
    void set_value(int v);
    void set_prev(DoubleNode *n);
    void set_next(DoubleNode *n);
private:
    int m_value;
    DoubleNode *m_prev;
    DoubleNode *m_next;
};

#endif //DOUBLYLINKEDLIST_NODE_H
