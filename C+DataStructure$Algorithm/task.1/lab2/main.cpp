
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;
};

class Queue {
    Node * front;
    Node * rear;
public:
    Queue(){
        front=rear=NULL; }

    static Node * Create(int data){
        Node * newNode=new Node();
        newNode->data=data;
        newNode->prev=NULL;
        newNode->next=NULL;
        return newNode; }

    void enQueue(Node * newNode){
        if (front==NULL){
            front=rear=newNode;
        }else{
            rear->next=newNode;
            newNode->prev=rear;
            rear=newNode; } }

    void deQueue(){
        if(front==rear){
            front=rear=NULL; }
        else {
            front=front->next;
            front->prev=NULL;}  }

     void PrintQueue(){
        Node * temp=front;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp=temp->next; } }
};

int main()
{

   Queue q;
    q.enQueue(Queue::Create(10));
    q.enQueue(Queue::Create(20));
    q.enQueue(Queue::Create(30));
    q.enQueue(Queue::Create(40));
    q.enQueue(Queue::Create(50));
    q.PrintQueue();

    q.deQueue();
    q.PrintQueue();
     return 0;
}
