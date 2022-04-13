#include <stdio.h>
#include <stdlib.h>

int main()
{
   int **ptr;
   int col;
   int row;
   printf("enter row:");
   scanf("%d", &row);
   printf("enter col:");
   scanf("%d", &col);

   ptr=malloc(row*sizeof(int*));

   for(int i=0; i<row;i++){
    ptr[i]=malloc(col*sizeof(int));
                           }

   for(int i=0;i<row;i++){
    for(int j=0; j<col;j++){
        ptr[i][j]=10;
                          }}

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",ptr[i][j]);
                              }
        printf("\n") ;
                              }

     //for(int i=0;i<col;i++){
         //free(ptr[i]);
                         //}

    return 0;
}
