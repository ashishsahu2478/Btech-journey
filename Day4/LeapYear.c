#include <stdio.h>

int main()

{
int year;
printf("Enter the year you want to check\n");
scanf("%d",&year);
if (year%100==0){
if (year%400==0){
printf("Given year is a leap year\n");}
else{
printf("Given year is not a leap year\n");
}
}
else{
if (year%4==0){
printf("Given year is a leap year\n");
}
else{
printf("Given year is not a leap year\n");
   }
 }
    return 0;
}