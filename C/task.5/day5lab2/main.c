#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
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
    float netsalary=0;
    struct Employee emp[3];

    for(int i=0;i<3;i++){
            system("cls");
            printf("enter details of employee %d",i+1);

            gotoxy(11,5);
                   printf("id\n");
            gotoxy(22,5);
                   scanf("%d",&emp[i].id);

             _flushall;
            gotoxy(50,5);
                   printf("name");
            gotoxy(62,5);
                   scanf("%s",emp[i].name);

              _flushall;
             gotoxy(10,10);
                    printf("age");
            gotoxy(22,10);
                   scanf("%d",&emp[i].age);

            _flushall;
            gotoxy(50,10);
                   printf("salary\n");
            gotoxy(62,10);
                   scanf("%f",&emp[i].salary);

             _flushall;
            gotoxy(10,15);
                   printf("commession\n");
            gotoxy(22,15);
                   scanf("%f",&emp[i].commission);

            _flushall;
            gotoxy(50,15);
                   printf("deduction\n");
            gotoxy(62,15);
                   scanf("%f",&emp[i].deduction);
    }

    system("cls");

    for(int i=0;i<3;i++){
    /*
    printf("\n employee data %i",i+1);

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

    gotoxy(10,15+i*10);
      printf("commission:");
      gotoxy(30,15+i*10);
    printf("%f",emp[i].commission);

     gotoxy(50,15+i*10);
     printf("deduction");
     gotoxy(70,15+i*10);
    printf("%f",emp[i].deduction);*/

     gotoxy(10,10+i*10);
     printf("netsalary for employee %i:" , 1+i);
     gotoxy(40,10+i*10);
     printf("%f\n" ,emp[i].salary+emp[i].commission-emp[i].deduction );
    }
    return 0;
}
