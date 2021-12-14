//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_DOUBLENODE_H
#define DOUBLYLINKEDLIST_DOUBLENODE_H

template<class T>
class DoubleNode {
public:
    DoubleNode(T v, DoubleNode *p, DoubleNode *n);
    DoubleNode<T> *prev() const;
    DoubleNode<T> *next() const;
    T value() const;
    void set_value(T v);
    void set_prev(DoubleNode<T> *n);
    void set_next(DoubleNode<T> *n);
private:
    T m_value;
    DoubleNode *m_prev;
    DoubleNode *m_next;
};

#endif //DOUBLYLINKEDLIST_DOUBLENODE_H
