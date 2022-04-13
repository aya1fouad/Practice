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

    void Delete(Node *pDelete){
       if(pDelete==head&&pDelete==tail){
        head=tail=NULL;
       }
       else if(pDelete==head){
        head=head->next;
        head->prev=NULL;
       }
       else if(pDelete==tail){
        tail=tail->prev;
        tail->next=NULL;
       }
       else{
        pDelete->prev->next=pDelete->next;
        pDelete->next->prev=pDelete->prev;
       }
       pDelete->next=pDelete->prev=NULL;
    }

    void InsertAfter(Node *newNode , Node *pAfter){
      if ( pAfter==NULL){
         cout<<"the previous node can't be null"<<endl;
         return;
      }
      else{
        newNode->prev=pAfter;
        newNode->next=pAfter->next;
        pAfter->next=newNode;
      }

    }

};



int main()
{

    LinkedList list;

    list.Add(LinkedList::create(3));
    list.Add(LinkedList::create(5));
    list.Add(LinkedList::create(7));
    list.Add(LinkedList::create(9));
    list.Add(LinkedList::create(11));
    list.Display();

    Node *psearch = list.Search(9);
    list.Delete(psearch);
    list.Display();


    list.InsertAfter(LinkedList::create(6),list.Search(5));
    list.Display();


    return 0;
}
