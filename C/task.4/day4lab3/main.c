#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter character\n");
    ch=getch();
    printf("%d",ch);

    if(ch!=-32){
        printf("normal key =>%d\n" , ch);
    }else{
        ch=getch();
        printf("extended key =>%d\n" , ch);
           }
    return 0;
}
