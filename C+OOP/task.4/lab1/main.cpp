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

    Stack (Stack &old){
     this->tos=old.tos;
     size=old.size;
     arr= new int [size];
     for(int i=0;i<tos;i++){
        arr[i]=old.arr[i];
     }
     cout<<"ctor"<<endl;
    }

    ~Stack(){
    cout<<"dest";
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

      Stack & operator= (const Stack & right)
    {
        delete [] this ->arr;
        tos=right.tos;
        size=right.size;
        arr=new int [size];
        for (int i=0; i<tos; i++)
        {
            arr[i]=right.arr[i];
        }
        return * this;
    }

     Stack operator + (Stack right)
    {
        Stack res;
        res.tos=0;
        res.size=size+right.size;
        res.arr=new int [res.size];
        for(int i=res.tos; i<tos; i++){
            res.arr[res.tos++]=arr[i];}
        for(int i=0; i<right.tos; i++){
            res.arr[res.tos++]=right.arr[i];}
        return res;}

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
   Stack s1,s2,s3;
   s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    s2.push(90);
    s2.push(80);
    s2.push(70);

    s3=s1+s2;
    printStack(s3);
    return 0;
}
