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

char* LineEdit (int size,int xpos, int ypos, int startc,int endc)
{

    int flag=2;
    char ch;
    char *pfst, *pcurr,*plast;
    int currpos, lastpos, fstpos;
    currpos=lastpos=fstpos=xpos;

    char *arr;
    arr = malloc(size*sizeof (char));

    for(int i=0; i<size; i++)
    {
        gotoxy(xpos+i,ypos);
        textattr(23);
        _cprintf(" ");
    }

    pcurr=pfst=plast=arr;


    do
    {
        gotoxy(currpos,xpos);
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
                currpos=xpos;
                pcurr=arr;
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

        default:

            if(isprint(ch))
            {
                if(pcurr<pfst+size)
                {
                    if(pcurr==plast)
                    {
                        *pcurr=ch;
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


    return arr;
}

int main()
{
    int x, c,r ;
    printf("enter array of size");
    scanf ("%d", &x);
    printf("enter col\n");
    scanf ("%d", &c);
    printf("enter row\n");
    scanf ("%d", &r);

    char* z=LineEdit(x, c, r, 65,120 );
    printf("%s", z);

    return 0;
}
