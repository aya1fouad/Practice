#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>

template<class T>
class Node
{
public:
    T* Data;
    Node *Next;
    Node(T* data)
    {
        Data = data;
        Next = NULL;
    }
};

template<class T>
class LinkedList
{
    Node<T> *head;
    Node<T> *tail;
    Node<T> *current;

public:
    LinkedList()
    {
        head = tail = NULL;
    }
    void Add(T *data)
    {
        if(head == NULL)
        {
            head = tail = new Node<T>(data);
        }
        else
        {
            Node<T> *newNode = new Node<T>(data);
            tail->Next = newNode;
            tail = newNode;
        }
    }
    T* BeginIteration()
    {
        current = head;
        if(current!=NULL){
            return current->Data;
        }
        else{
            return NULL;
        }
    }
    T* GetNext()
    {
        current = current->Next;
        if(current!=NULL){
            return current->Data;
        }
        else{
            return NULL;
        }
    }
};
#endif // LINKEDLIST_H
