#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define home 71
#define end 79
#define extended -32
#define esc 27
#define enter 13
#define left 75
#define right 77
#define deletee 88
#define backspace 8

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

int main()
{
    char line[31];
    char *pfst, *pcurr,*plast;
    char ch;
    int flag=2;
    int currpos, lastpos, fstpos;
    currpos=lastpos=fstpos=10;

    for(int i=0; i<31; i++)
    {
        gotoxy(10+i,10);
        textattr(23);
        _cprintf(" ");
    }

    pcurr=pfst=plast=line;

    do
    {
        gotoxy(currpos,10);
        ch=getch();
        switch(ch)
        {
        case -32:
            ch=getch();
            switch(ch)
            {
            case left:
                if(pcurr>pfst)
                {
                    currpos--;
                    pcurr--;
                }
                break;
            case right:
                if(pcurr<plast)
                {
                    pcurr++;
                    currpos++;
                }
                break;
            case home:
                currpos=10;
                pcurr=line;
                break;
            case end:
                currpos=lastpos;
                pcurr=plast;
                break;
            }

            break;

        case enter:
            flag=1;
            *plast='\0';
            break;

        case esc:
            flag=1;
            *plast='\0';
            break;
       /* case backspace:
             for(int i=currpos-1;i<30;i++){
            if(pcurr=plast)
                {
                 printf("\b \b");
                 currpos--;
                }}
            break;*/

        /*case deletee:
            for(int i=currpos-1;i<30;i++){

                line[i]=line[i+1];
            }

            break;*/

        default:

            if(isprint(ch))
            {
                if(pcurr<pfst+30)
                {
                    if(pcurr==plast)
                    {
                        *pcurr==ch;
                        printf("%c",ch);
                        pcurr++;
                        currpos++;
                        plast++;
                        lastpos++;
                    }
                    else
                    {
                        *pcurr=ch;
                        printf("%c",*pcurr);
                        pcurr++;
                        currpos++;
                    }
                }
            }
        }

    }
    while(flag==2);

    system ("cls");
    printf("%s", line);
    return 0;
}
