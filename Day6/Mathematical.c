#include <stdio.h>
#include <math.h>

int main()
{
    long long B=1;
    int A,i,C;
printf("Enter Your Integer On Which Operation Is To Be Performed\n");
scanf("%d",&A);    
printf("===== MENU ====\n1. Square\n2. Cube\n3. Factorial\n4. Multiplication Table\n5. Exit\n");
printf("Please Enter Your Choice From Above Given Options\n");
scanf("%d",&C);
switch (C)
{
case 1:
printf("Your answer is %.0f",pow( A, 2));
    break;
case 2:
printf("Your answer is %.0f\n",pow(A,3));
    break;
case 3:
if (A==0)
{
    printf("Your answer is 1");
}
else if (A<0)
{
    printf("factorial is not defined for negetive values\n");
}
else if (A>20)
{
    printf("Factorial of %d is too large to calculate",A);
}
else
{
for  (i = 1 ; i <= A; i++)
{
    B=B*i;
}
 printf("Your answer is %lld\n",B);
}
    break;
case 4:
printf("Your desired answer is Below\n");
for ( i = 1; i <=10; i++)
{
    printf("%d * %d = %d\n",i,A,i*A);
}
    break;
case 5:
printf("Exit\n");
    break;
default:
printf("Invalid entry");
    break;
}

    return 0;
}