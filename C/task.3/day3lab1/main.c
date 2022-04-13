#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,min ,max ,i;
     int arr[size];
    printf("enter size of array");
    scanf("%d", &size);

    printf("enter elements of array");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<size;i++){
        if(arr[i]>arr[0]){
            max=arr[i];
        }
        if(arr[i]<arr[0]){
            min=arr[i];
        }
    }
    printf("max number is%d /n" , max);
    printf("min number is%d" , min);

    return 0;
}
