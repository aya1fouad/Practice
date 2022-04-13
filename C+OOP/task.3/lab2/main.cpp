#include <iostream>

using namespace std;
class Stack{
private:
    int *arr;
    int tos;
    int size;
    static int counter;
public:
    Stack(){
    cout<<"ctor";
    tos=0;
    size=5;
    arr=new int[size];
    counter++;
    }

    Stack(int _size){
    cout<<"ctor";
    tos=0;
    size=_size;
    arr= new int[size];
    counter++;
    }

    ~Stack(){
    cout<<"dest";
    for(int i=0;i<size;i++){
        this->arr[i]=-121;
    }
    delete []arr;
    counter--;
     }

     static int getCounter(){
     return counter;
     }

     int isFull(){;
     return tos==size;
     }

     int isEmpty(){
     return tos==0;
     }

     void push(int num){
     if (!isFull()){
        arr[tos++]=num;
     }
     else{
        cout<<"full";
     }
     }

     int pop(){
     int retval=-123;
     if(!isEmpty()){
        retval=arr[--tos];
     }
     else{
        cout<<"empty";
     }
     return retval;
     }

};

int Stack:: counter=0;

int main()
{
   Stack s1,s2(3);
   cout<<Stack :: getCounter();


    return 0;
}

