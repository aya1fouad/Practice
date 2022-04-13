#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;

    int x[3][2]= {{1,4},{2,5},{3,6}};
    int y[2][1]= {{2},{3}};
    int z[3][1]={0};

    /*for(i=0; i <3; i++)
    {
        for(j=0; j<1; j++)
        {
            z[i][j]=0;
        }
    }*/

    for(i=0; i <3; i++)
    {
        for(j=0; j<2; j++)
        {
            for(k=0; k<3; k++)
            {

                z[i][j]=z[i][j]+x[i][k]*y[k][j];
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<1; j++)
        {
            printf("%d\n", z[i][j]);
        }
    }
    return 0;
}
