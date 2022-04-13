#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,row, i, j;
    int arr[row][col];

    printf("enter number of col");
    scanf("%d", &col);
    printf("enter number of row");
    scanf("%d", &row);

    int sum[col];
    int summ, avg;

    printf("enter elements of array");
    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(j=0; j<col; j++)
    {

        for(i=0; i<row; i++)
        {
            sum[j]+=arr[i][j];
            printf("======>%d %d\n",j,i);
        }
      summ+=sum[j];
    }

    avg=summ/col;

    printf("the average of col in array is%d", avg);
    return 0;
}
