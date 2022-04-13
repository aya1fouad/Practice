#include <stdio.h>
#include <stdlib.h>
int pow(int b , int p){
    /*if(p==0){
        return 1;
    }else if(p==1){
        return b;
    }
      else {
       return b*pow(b,p-1);
    }*/
      int result =1;
     while (p != 0) {
        result *= b;
        --p;
    }
}
int main()
{
    int x, y;
    printf("enter number\n");
    scanf("%d", &x);
    printf("enter power\n");
    scanf("%d", &y);

    int z= pow(x,y);
    printf("the answer is: %d" , z);
    return 0;
}
