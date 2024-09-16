//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_NODE_H
#define DOUBLYLINKEDLIST_NODE_H


template <typename T>
class DoubleNode {
public:
    DoubleNode(T v, DoubleNode<T> *p, DoubleNode<T> *n);
    ~DoubleNode();
    T value() const;
    DoubleNode<T> *prev() const;
    DoubleNode<T> *next() const;
    void set_value(T v);
    void set_prev(DoubleNode *n);
    void set_next(DoubleNode *n);
private:
    T m_value;
    DoubleNode<T> *m_prev;
    DoubleNode<T> *m_next;
};


#endif //DOUBLYLINKEDLIST_NODE_H
