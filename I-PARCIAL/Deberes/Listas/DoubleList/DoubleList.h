#pragma once
#include "Node.cpp"

template <typename T>
class DoubleList{
    
    private:
        int size = 0;
        Node<T> *head = nullptr;
        Node<T> *getLastNode();
        Node<T> *getNode(int index);
    public:
        DoubleList() = default;
        void insertStart(T data);
        void insertFinal(T data);
        void insertBetween(T data,int index);
        void deleteNode(int index);
        void printList();
};

