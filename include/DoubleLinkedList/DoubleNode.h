//
// Created by zhuangzm on 2021/12/13.
//

#ifndef DOUBLYLINKEDLIST_DOUBLENODE_H
#define DOUBLYLINKEDLIST_DOUBLENODE_H

template<class T>
class DoubleNode {
public:
    DoubleNode(T v, DoubleNode* p, DoubleNode* n);
    template<class T1> DoubleNode<T1> *prev() const;
    template<class T1> DoubleNode<T1> *next() const;
    T value() const;
    void set_value(T v);
    template<class T1> void set_prev(DoubleNode<T1> *n);
    template<class T1> void set_next(DoubleNode<T1> *n);
private:
    int m_value;
    DoubleNode *m_prev;
    DoubleNode *m_next;
};

#endif //DOUBLYLINKEDLIST_DOUBLENODE_H
