#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    do
    {
    printf("a-good morning\n");
    printf("b-good afternoon\n");
    printf("c-good bye\n");
    printf("enter char a ,b ,c\n");

    scanf("%c", &ch);
    _flushall();
    system("cls");

        if( ch=='a')
        {
            printf("good morning\n");


        }
        else if(ch=='b')
        {
            printf("good afternoon\n");

        }
        }while(ch!='c');

        if(ch=='c'||ch=='C')
        {
            printf("goodbye.");
        }

        return 0;
    }
