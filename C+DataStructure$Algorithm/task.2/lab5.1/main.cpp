
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
    //////////////////////
 void bubbleSort(){
	int counter = 0;
         Node *start = head;
         Node *ptr1 ;
         Node *ptr2 ;
         Node *temp ;
         ptr1=ptr2=temp=NULL;

     while(start != NULL){
         counter++;
         start = start->next;
             }

  for(int i = 0; i<counter; ++i){
    ptr1 = ptr2 = head;
    while (ptr1->next != NULL){
      if (ptr1->data > ptr1->next->data){
        temp = ptr1->next;
        ptr1->next = ptr1->next->next;
        temp->next = ptr1;
        if(ptr1 == head){
            head = ptr2 = temp;
        }
        else{
           ptr2->next = temp;
        }
        ptr1 = temp;
      }
      ptr2 = ptr1;
      ptr1 = ptr1->next;
    }
  }
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
    cout<<endl;
    list.bubbleSort();
    list.Display();
    return 0;
}
