#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2 ,ans ;
    char oper , conans;


   do{
         printf("enter number1\n");
    scanf("%i",&num1);
    printf("enter number2\n");
    scanf("%i",&num2);
    _flushall();
    printf("enter operator\n");
    scanf("%c" , &oper);

            switch(oper){
    case '+' :ans=num1+num2;
            printf("your answer is %d\n" , ans);
        break;
    case '-' :ans=num1-num2;
            printf("your answer is %d\n" , ans);
        break;
    case '*' :ans=num1*num2;
            printf("your answer is %d\n" , ans);
        break;
    case '/' : if (num2!=0)
          {
            ans=num1/num2;
            printf("your answer is %d\n" , ans);
          }else {

            printf("unknown number\n" );}
        break;
    default : printf("unknown operator\n" );
        break;

    }
    printf("do you want to continue?y|n \n");
    _flushall();
    scanf("%c" ,&conans);
    }while (conans=='y');



    return 0;
}
