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

struct employee{
int id;
char name[10];
int age;
float salary;
float commission;
float deduction;   };

int main()
{
   int x=10;
   struct employee emp ;
   gotoxy(10,10);
   printf("id:");
   gotoxy(50,10);
   printf("name:");
   gotoxy(10,30);
   printf("age:");
   gotoxy(50,30);
   printf("salary:");
   gotoxy(10,50);
   printf("comm:");
   gotoxy(50,50);
   printf("deduc:");

   gotoxy(20,10);
   scanf("%d",&emp.id);
    _flushall();
    gotoxy(60,10);
   scanf("%s",&emp.name);
    _flushall();
    gotoxy(20,30);
   scanf("%d",&emp.age);
    _flushall();
    gotoxy(60,30);
   scanf("%f",&emp.salary);
    _flushall();
    gotoxy(20,50);
   scanf("%f",&emp.commission);
    _flushall();
    gotoxy(60,50);
   scanf("%f",&emp. deduction);

   system("cls");
   printf("employee%s netsalary is %f", emp.name, emp.salary+emp.commission-emp.deduction);


    return 0;
}
