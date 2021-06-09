#ifndef LIST_H
#define LIST_H

#include "Node.h"

template<class T>
class List
{
public:
    List();

    void add_begin(T _data);
    void add_end(T _data);
    void _delete_begin();
    void _delete_end();
    void _delete_date(T _data);

    bool is_empty();

    void _print_node();

    virtual ~List();


private:
    Node<T> *_next;
    int m_num_nodes;
};

#endif
