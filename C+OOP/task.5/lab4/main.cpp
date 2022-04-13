#include <iostream>
using namespace std;
int FunVal(int x)
{
    x++;
    return x;
}
int main()
{
    int num=10;
    cout<<FunVal(num);

    return 0;
}
