#include <iostream>
#include<string.h>
using namespace std;

class Person
{
    public:
    char fullName[21];
    float netSalary;
};

class Employee
{
    public:
    char fname[10];
    char lname[10];
    float salary;
    float commission;
    float deduction;

    operator Person()
    {
        Person obj;
        strcpy(obj.fullName,fname);
        strcat(obj.fullName ," ");
        strcat(obj.fullName ,lname);

        obj.netSalary=salary+commission-deduction;

      return obj;
    }
};

main()
{
    Employee emp;
    strcpy(emp.fname,"Ahmed");
    strcpy(emp.lname,"Osama");
    emp.salary=1000;
    emp.commission=100;
    emp.deduction=50;

    Person p=emp;

    cout<<p.fullName<<endl;
    cout<<p.netSalary<<endl;
}
