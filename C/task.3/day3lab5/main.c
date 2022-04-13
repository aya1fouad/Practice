#include <stdio.h>
#include <stdlib.h>
int add(int x,int y){
    int ans=x+y;
    return ans ;}

int sub(int x,int y){
    int ans=x-y;
    return ans;}

int mul(int x,int y){
    int ans=x*y;
    return ans;}

int divi(int x,int y){
    if (y!=0)
          {
            int ans=x/y;
            return ans;
          }else {
            return 0 ;}
}

int main()
{
    printf("enter two numbers\n");
    int x, y ,a,s,m,d;
    scanf("%d%d" , &x,&y);
    a=add(x,y);
    s=sub(x,y);
    m=mul(x,y);
    d=divi(x,y);
    printf("add is%d\n" ,a);
    printf("sub is%d\n" ,s);
    printf("mul is%d\n" ,m);
    printf("divi is%d\n" ,d);
    return 0;
}
