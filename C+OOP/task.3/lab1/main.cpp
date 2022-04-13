#include <iostream>

using namespace std;
class Stack{
private:
    int arr[5];
    int tos;
public:
    Stack(){
    cout<<"ctor";
    tos=0;
    }
    //Stack(int _size){
    //cout<<"ctor";
    //tos=0;
    //size=_size;
    //}
    ~Stack(){
    cout<<"dest";
     }
     void push(int num){
     if (tos!=5){
        arr[tos++]=num;
     }
     else{
        cout<<"full";
     }
     }
     int pop(){
     int retval=-123;
     if(tos!=0){
        retval=arr[--tos];
     }
     else{
        cout<<"empty";
     }
     return retval;
     }

};
int main()
{
   Stack s1;
   s1.push(10);
    return 0;
}
