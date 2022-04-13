#include <stdio.h>
#include <stdlib.h>

int main()
{
   char fn[10];
   char ln[10];
   char full[21];
  printf("enter first name \n");
  gets(fn);
  printf("your first name is\n");
  puts(fn);
   printf("enter last name \n");
  gets(ln);
  printf("your last name is\n");
  puts(ln);

  strcat(full,fn);
  strcat(full," ");
  strcat(full, ln);
  printf("your full name is\n");
  puts(full);
    return 0;
}
