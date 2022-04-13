#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int *ptri;
    ptri=arr;

    for(int i=0;i<5;i++){
        printf("enter element %d",i+1);
        scanf("%d",ptri);
    }

    for(int i=0;i<5; i++){
        printf("%d\n", *ptri);
        ptri++;
    }
    return 0;
}
