#include <iostream>

using namespace std;

int& FunRef(int &x)
{
    x++;
    return x;
}

int main()
{
    int num=100;
    cout<<FunRef(num)<<endl;

    FunRef(num)=55;
    cout << num << endl;
    return 0;
}
