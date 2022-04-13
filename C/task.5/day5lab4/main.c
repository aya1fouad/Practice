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

struct Employee{
int id;
char name[10];
int age;
float salary;
float commission;
float deduction;

};

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
    struct Employee emp[10];
    char menu[4][15]={"New","Display All","Display By ID","Exit"};
    int cursor=0;
    int flag=1;
    char ch;
    int i;
    int id;

    do{
            system("cls");

        for(int i=0;i<4;i++){
             if(i==cursor){
            textattr(4);  }
        else{
            textattr(15); }

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

            for(i=0;i<10;i++){
            system("cls");
            printf("enter details of employee %d",i+1);

            gotoxy(10,5);
            printf("id\n");
            gotoxy(20,5);
            scanf("%d",&emp[i].id);

            gotoxy(50,5);
            printf("name");
            _flushall;
            gotoxy(60,5);
            scanf("%s",emp[i].name);

             gotoxy(10,10);
             printf("age");
            gotoxy(20,10);
             scanf("%d",&emp[i].age);

            gotoxy(50,10);
            printf("salary\n");
            gotoxy(60,10);
            scanf("%f",&emp[i].salary);
    }

            getch();

            break;
        case 1:
           system("cls");

         for(i=0;i<10;i++){

    printf("\n employee details %d \n",i+1);
     gotoxy(10,5+i*10);
    printf("id:");
    gotoxy(30,5+i*10);
    printf("%d",emp[i].id);

    gotoxy(50,5+i*10);
     printf("name:");
     gotoxy(70,5+i*10);
    printf("%s",emp[i].name);

    gotoxy(10,10+i*10);
      printf("age:");
      gotoxy(30,10+i*10);
    printf("%d",emp[i].age);

    gotoxy(50,10+i*10);
      printf("salary:");
      gotoxy(70,10+i*10);
    printf("%f",emp[i].salary);
    }
            getch();
            break;
        case 2:
             system("cls");
             printf("Enter ID \n");
             scanf("%d",&id);

             for(int i=0;i<10;i++){
                 if(emp[i].id==id){
                    printf("\n employee details %d \n",i+1);
                    gotoxy(10,5);
                    printf("id:");
                    gotoxy(30,5);
                    printf("%d",emp[i].id);

                    gotoxy(50,5);
                    printf("name:");
                    gotoxy(70,5);
                    printf("%s",emp[i].name);

                   gotoxy(10,10);
                   printf("age:");
                   gotoxy(30,10);
                   printf("%d",emp[i].age);

                   gotoxy(50,10);
                   printf("salary:");
                   gotoxy(70,10);
                   printf("%f",emp[i].salary);

                }
                else{
                   printf("wrong id \n");
                   }
                    }
            getch();
            break;
        case 3:
            flag=2;
            break;
        }
        break;

    }
    }while(flag==1);
    return 0;
}
