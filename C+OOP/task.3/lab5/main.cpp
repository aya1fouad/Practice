#include <iostream>

using namespace std;
class Stack{
private:
    int *arr;
    int tos;
    int size;
public:
    Stack(){
    cout<<"ctor"<<endl;
    tos=0;
    size=5;
    arr=new int[size];
    }

    Stack(int _size){
    cout<<"ctor"<<endl;
    tos=0;
    size=_size;
    arr= new int[size];
    }

    ~Stack(){
    cout<<"dest"<<endl;
    for(int i=0;i<size;i++){
        this->arr[i]=-121;
    }
    delete []arr;
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

     Stack reverseStack(){
     Stack retval(this->size);
     for(int i =tos-1 ;i>=0;i--){
        retval.push(this->arr[i]);
     }
     return retval;
     }

     friend void printStack(Stack);
};

void printStack(Stack STK){
for(int i=0;i<STK.tos;i++){
    cout<<endl<<STK.arr[i]<<endl;
}
}


int main()
{
   Stack s1(5);
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);
   s1.push(50);

   //Stack s2;
   //s2=s1.reverseStack();

  // printStack(s1);
  //printStack(s1);

  Stack s3;
  s1.reverseStack();



    return 0;
}


