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
struct employee{
int id;
char name[10];
int age;
float salary;
float commission;
float deduction;   };

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
    int x  ;
    struct employee emp ;
    printf("enter array of size");
    scanf ("%d", &x);


   gotoxy(10,5);
   printf("id:");
   gotoxy(50,5);
   printf("name:");
   gotoxy(10,10);
   printf("age:");
   gotoxy(50,10);
   printf("salary:");
   gotoxy(10,15);
   printf("comm:");
   gotoxy(50,15);
   printf("deduc:");


    emp.id=atoi(LineEdit(x,20,5,65,120 ));
        _flushall();
    //emp.name=LineEdit(10,60,5,65,120 );
    gotoxy(60,5);
    scanf("%s",&emp.name);
        _flushall();

    emp.age=atoi(LineEdit(x,20,10,65,120 ));
        _flushall();
    emp.salary=atof(LineEdit(x,60,10,65,120 ));
        _flushall();
    emp.commission=atof(LineEdit(x,25,15,65,120 ));
        _flushall();
    emp.deduction=atof(LineEdit(x,65,15,65,120 ));

   system("cls");

    printf("\n employee data is:");

    gotoxy(10,5);
    printf("id:");
    gotoxy(30,5);
    printf("%d",emp.id);

    gotoxy(50,5);
     printf("name:");
     gotoxy(70,5);
    printf("%s",emp.name);

    gotoxy(10,10);
    printf("age:");
    gotoxy(30,10);
    printf("%d",emp.age);

    gotoxy(50,10);
    printf("salary:");
    gotoxy(70,10);
    printf("%f",emp.salary);

    gotoxy(10,15);
      printf("commission:");
      gotoxy(30,15);
    printf("%f",emp.commission);

     gotoxy(50,15);
     printf("deduction");
     gotoxy(70,15);
    printf("%f",emp.deduction);



    /*char* z=LineEdit(x, c, r, 65,120 );
    printf("%s", z);*/

    return 0;
}
