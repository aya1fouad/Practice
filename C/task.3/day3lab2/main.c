#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,min ,max ,i, j, swap;
     int arr[size];
    printf("enter size of array");
    scanf("%d", &size);

    printf("enter elements of array");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++){
        for(j=1;j<size;j++){
            if(arr[i]>arr[j]){
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }


    return 0;
}
