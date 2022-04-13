#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define up 72
#define down 80
#define home 71
#define end 79
#define extended -32
#define esc 27
#define tab 9
#define enter 13



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
    char menu[3][10]={"New","Display","Exit"};
    int cursor=0;
    int flag=1;
    char ch;
    do{
            system("cls");


        for(int i=0;i<3;i++){

             if(i==cursor){
            textattr(4);
        }
        else{
            textattr(15);
        }
            gotoxy(10,10+i*2);
            _cprintf("%s",menu[i]);
    }


    _flushall;
    ch=getch();
    switch(ch){
    case extended:
        ch=getch();
        switch(ch){
            case up:
                cursor--;
                if(cursor<0){
                    cursor=2;
                }
                break;
            case down:
                cursor++;
                if(cursor>2){
                    cursor=0;
                }
                break;
            case home:

                cursor=0;
                break;
            case end:
                 cursor=2;
                break;
        }
    break;

    case esc:
        flag=5;
        break;
    case tab:
        cursor++;
                if(cursor>2){
                    cursor=0;
                }
        break;
    case enter:
        switch(cursor){
        case 0:
            system("cls");
            printf("new page");
            getch();

            break;
        case 1:
            system("cls");
            printf("display page");
            getch();
            break;
        case 2:
            flag=2;
            break;
        }
        break;

    }
    }while(flag==1);
    return 0;
}
