#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year , month , day ;
    int youryear, yourmonth, yourday;
    int cday ,cmonth;
    int currmonth, currday;
    printf("enter your birth year\n");
       scanf("%d", &year);
    printf("enter your birth month\n");
       scanf("%d", &month);
    printf("enter your birth day\n");
       scanf("%d", &day);



       youryear=2020-year;

       if (month ==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
          cday=31-day;
        yourday=cday+19;
        if (yourday >=31){
        currday=yourday-31;
        currmonth++;}

       }else if(month==4||month==6||month==9||month==11){
           cday=30-day;
        yourday=cday+19;
        if (yourday >=30){
        currday=yourday-30;
        currmonth++;}
       }else if (month==2&&year%4==0){
        cday=29-day;
        yourday=cday+19;
        if (yourday >=29){
        currday=yourday-29;
        currmonth++;}
        }else{
        cday=28-day;
        yourday=cday+19;
        if (yourday >=28){
        currday=yourday-28;
        currmonth++;}
        }

       if(month <=12){
        cmonth=12-month;
        yourmonth=cmonth+10;
       }

       if (yourmonth >=12){
        currmonth=yourmonth-12;
        youryear++;

       }
 printf("your age is %d %d %d" , youryear,currmonth,currday);
    return 0;
}
