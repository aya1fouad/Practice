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
struct Employee{
       int id;
       char name[10];
       int age;
       float salary;
       float commission;
       float deduction;
                };

int main()
{
    int x,y ;
    printf("enter array of size");
    scanf ("%d", &x);
    printf("enter number of employees:");
    scanf ("%d", &y);
    struct Employee emp[y];
   /* struct Employee *ptr;
    ptr=emp;*/
    for(int i=0;i<y;i++){
            system("cls");
            printf("enter details of employee %d",i+1);
             gotoxy(11,5);
                   printf("id\n");
            gotoxy(50,5);
                   printf("name");
             gotoxy(10,10);
                    printf("age");
            gotoxy(50,10);
                   printf("salary\n");
            gotoxy(10,15);
                   printf("commession\n");
            gotoxy(50,15);
                   printf("deduction\n");

    //ptr[i]->id=atoi(LineEdit(x,22,5,65,120 ));
       // _flushall();
    /*emp.name=LineEdit(x,60,10,65,120 );
        _flushall();*/
    emp[i].id=atoi(LineEdit(x,22,5,65,120 ));
    gotoxy(62,5);
    scanf("%s",&emp[i].name);
    emp[i].age=atoi(LineEdit(x,22,10,65,120 ));
        _flushall();
    emp[i].salary=atof(LineEdit(x,62,10,65,120 ));
        _flushall();
    emp[i].commission=atof(LineEdit(x,22,15,65,120 ));
        _flushall();
    emp[i].deduction=atof(LineEdit(x,62,15,65,120 ));


    }

    system("cls");

    for(int i=0;i<y;i++){

    printf("\n employee data %i",i+1);

    gotoxy(10,5+i*10);
    printf("id:");
    gotoxy(50,5+i*10);
    printf("name:");
    gotoxy(10,10+i*10);
    printf("age:");
    gotoxy(50,10+i*10);
    printf("salary:");
    gotoxy(10,15+i*10);
    printf("commission:");
    gotoxy(50,15+i*10);
    printf("deduction");

    gotoxy(30,5+i*10);
    printf("%d",emp[i].id);
    gotoxy(70,5+i*10);
    printf("%s",emp[i].name);
    gotoxy(30,10+i*10);
    printf("%d",emp[i].age);
    gotoxy(70,10+i*10);
    printf("%f",emp[i].salary);
    gotoxy(30,15+i*10);
    printf("%f",emp[i].commission);
    gotoxy(70,15+i*10);
    printf("%f",emp[i].deduction);
    }




    return 0;
}
