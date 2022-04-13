#include <stdio.h>
#include <stdlib.h>

int main()
{
     char mes[50];
      int i;
    printf("enter message\n");
    /*for(i=0; i<50; i++)
    {
        scanf("%c", &mes[i]);
    }*/
    gets(mes);


    printf("\nArray in reverse order: ");
    for(i = 49; i>=0; i--)
    {
        printf("%c", mes[i]);
    }


    return 0;
}
