
#include <iostream>
#include "DoubleList.h"

using namespace std;

template <typename T>
void DoubleList<T>::insertStart(T data){

    Node<T> *newNode = new Node<T>(data);
    if(head == nullptr){
        this->head = newNode;
    }else{
        head->setPrevious(newNode);
        newNode->setNext(head);
        head = newNode;
    }
    size++;
    
}

template <typename T>
void DoubleList<T>::insertFinal(T data){
    
    Node<T> *newNode = new Node<T>(data);

    if(head == nullptr){
        this->head = newNode;
    }else{
        Node<T> *last = getLastNode();
        last->setNext(newNode);
        newNode->setPrevious(last);
    }

    size++;

}

template <typename T>
void DoubleList<T>::insertBetween(T data,int index){

    if(index < 0 || index > size){
        cout<<"Indice fuera de rango"<<endl;
    }

    if(index == 0 || size == 0){
        return insertStart(data);
    }else if(index == size){
        return insertFinal(data);
    }

    Node<T> *now = getNode(index);
    Node<T> *previous = now->getPrevious();
    Node<T> *next = now->getNext();

    Node<T> *node = new Node<T>(data);

    previous->setNext(node);
    node->setNext(now);
    node->setPrevious(previous);
    now->setPrevious(node);
    size++;
    
}

template <typename T>
void DoubleList<T>::deleteNode(int index){

    if(index < 0 || index > size){
        cout<<"Indice fuera de rango"<<endl;
    }

    if (index == 0) {
        Node<T> *temp = head;
        head = head->getNext();
        head->setPrevious(nullptr);
        delete temp;
    } else if (index == size - 1) {
        Node<T> *node = getLastNode();
        Node<T> *previous = node->getPrevious();
        
        previous->setNext(nullptr);
        delete node;
    } else {
        Node<T> *now = getNode(index);
        Node<T> *previous = now->getPrevious();
        Node<T> *next = now->getNext();
        
        previous->setNext(next);
        next->setPrevious(previous);
        delete now;
    }

    size--;
}

template <typename T>
void DoubleList<T>::printList(){
    Node<T> *aux = head;
    while (aux != nullptr){
        cout<<aux->getValor()<<"--->";
        aux = aux->getNext();
    }

    
}

template <typename T>
Node<T>* DoubleList<T>::getLastNode(){

    Node<T> *aux = head;
    while (aux->getNext() != nullptr){
        aux = aux->getNext();
    }
    return aux;
    
}

template <typename T>
Node<T> *DoubleList<T>::getNode(int index) {
    if (index < 0 || index >= size) {
        cout<<"Indice fuera de rango"<<endl;
    }

    if (index == 0) {
        return head;
    }

    int indexNow = 0;
    Node<T> *last = head;

    while (last->getNext() != nullptr) {
        if (indexNow == index) {
            break;
        }

        indexNow++;
        last = last->getNext();
    }

    return last;
}
