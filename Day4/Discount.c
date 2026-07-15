#include <stdio.h>

int main()

{
int A;
double amount;
printf("Please Enter You Total amount :\n");
scanf("%lf",&amount);
if (amount<5000 && amount>0)
{
    printf("Your net Total including discounts is : %.2lf\n",amount);
}
else if (amount>5000 && amount<=7000)
{
   A = (amount/100)*5;
    printf("Your net Total including discounts is : %.2lf\n",amount-A);
}
else if (amount>7000 && amount<=9000)
{
    A = (amount/100)*10;
    printf("Your net Total including discounts is : %.2lf\n",amount-A);
}
else if (amount>9000)
{
    A = (amount/100)*20;
    printf("Your net Total including discounts is : %.2lf\n",amount-A);   
}
else
{
    printf("Invalid Entry");
}
return 0;
}