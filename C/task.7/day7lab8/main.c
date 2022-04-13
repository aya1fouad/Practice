#include <stdio.h>
#include <stdlib.h>

struct employee{
int id;
int age;
int salary;
};
int main()
{
  struct employee emp;
  struct employee *ptr;
  ptr=&emp;
  printf("enter employee id:") ;
  scanf("%d",&ptr->id) ;
  printf("your id is:%d \n", ptr->id);

  printf("enter employee age:") ;
  scanf("%d",&(*ptr).age) ;
  printf("your age is:%d",(*ptr).age );


  return 0;
}
