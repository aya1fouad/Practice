#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *prev;
    Node *next;
};

class LinkedList{
Node *head;
Node *tail;
public:
    LinkedList(){
      head=tail=NULL;
    }

    static Node* create(int data){
       Node* newNode=new Node();
       newNode->data=data;
       newNode->prev=newNode->next=NULL;
       return newNode;
    }

    void Add(Node *newNode){
      if(head==NULL){
        head=tail=newNode;
      }
      else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
      }
    }

    void Display(){
       Node *current=head;
       while(current != NULL){
        cout<<current->data<<endl;
        current=current->next;
       }
    }

    Node* Search(int data){
       Node *current=head;
       while(current !=NULL){
        if(current->data==data){
           return current;
        }
        current=current->next;
       }
       return NULL;
    }

    //////////////////////
    void swap(Node *x,Node *y){
       int tmp=x->data;
        x->data=y->data;
        y->data=tmp;}
    ////////////////////
    void bubbleSort(){
        int sorted=0;
        Node *current=new Node;
        current=head;

    while(!sorted){
            sorted=1;
        while((current->next)!=NULL){
            if(current->data > (current->next)->data){
                swap(current,current->next);
                sorted=0;
            }
            current=current->next;
        }
        current=head;}
    }
  /////////////////////////////////////
};



int main()
{
    LinkedList list;
    Node *newOne;

    list.Add(LinkedList::create(5));
    list.Add(LinkedList::create(4));
    list.Add(LinkedList::create(2));
    list.Add(LinkedList::create(1));
    list.Add(LinkedList::create(3));
    list.Display();

    list.bubbleSort();
    list.Display();
    return 0;
}
