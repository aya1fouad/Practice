#include <iostream>

using namespace std;

int* FunAdd(int* x)
{
    (*x)++;
    return x;
}

int main()
{
    int num=22;

    cout <<FunAdd(&num)<< endl;

    cout<<*(FunAdd(&num))<<endl;

    *(FunAdd(&num))=100;
    cout<<num;

    return 0;
}
