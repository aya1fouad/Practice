#include <stdio.h>
#include <stdlib.h>

int binary(int dnum) {
    int bnum ;
    int remainder;
    int temp = 1;

    while (dnum!=0)
    {
        remainder = dnum%2;
        dnum = dnum / 2;
        bnum +=remainder*temp;
        temp = temp * 10;
    }
    return bnum;
}

int main()
{
    int d;
    printf("Enter decimal number:");
    scanf("%d", &d);

    int b = binary(d);
    printf("Binary Number of %d is: %d", d,b);


    return 0;
    }
