#include <stdio.h>
#include <stdlib.h>
int factorial (int num){
    if(num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main()
{
    int x;
    printf("enter number!\n");
    scanf("%d",&x);
    int y =factorial(x);
    printf("the factorial of number %d is : %d", x ,y);
    return 0;
}
