#include <iostream>

using namespace std;
template <class T>
class Stack{
private:
    T *arr;
    int tos;
    int size;
public:
    Stack();
    Stack(int _size);
    ~Stack();
     int isFull();
     int isEmpty();
     void push(T num);
     int pop();
};

int main()
{

   Stack <int>s1;
   Stack<char>s2;


    return 0;
}


template <class T>
 Stack<T>::Stack(){
    cout<<"ctor";
    tos=0;
    size=5;
    arr=new T[size];
    //counter++;
    }

template<class T>
Stack<T>::Stack(int _size){
    cout<<"ctor";
    tos=0;
    size=_size;
    arr= new T[size];
    //counter++;
    }

template<class T>
 Stack<T>::~Stack(){
    cout<<"dest";
    for(int i=0;i<size;i++){
        this->arr[i]=-121;
    }
    delete []arr;
     }

template<class T>
 int Stack<T>::isFull(){
     return tos==size;
     }

template<class T>
 int Stack<T>::isEmpty(){
     return tos==0;
     }

template<class T>
 void Stack<T>::push(T num){
     if (!isFull()){
        arr[tos++]=num;
     }
     else{
        cout<<"full";
     }
     }

template<class T>
int Stack<T>::pop(){
     T retval=-123;
     if(!isEmpty()){
        retval=arr[--tos];
     }
     else{
        cout<<"empty";
     }
     return retval;
     }
