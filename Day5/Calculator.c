#include <stdio.h>

int main()
{
    int A,B;
    char Ch;
printf("Enter First Integer\n");
scanf("%d",&A);
printf("Enter Second Integer\n");
scanf("%d",&B);
printf("Enter Your operation (%%,*,/,+,-)\n");
scanf(" %c",&Ch);
if ((Ch=='/'|| Ch=='%') &&  B==0)
{
    printf("Division by 0 is not possible\n");
    return 0;
}
switch (Ch)
{
case '%':
printf("Your answer is %d\n",A%B);
    break;
case '/':
printf("Your answer is %.2f\n",(float)A/B);
    break;
case '*':
printf("Your answer is %d\n",A*B);
    break;
case '+':
printf("Your answer is %d\n",A+B);
    break;
case '-':
printf("Your answer is %d\n",A-B);
    break;
default:
printf("Invalid entry");
    break;
}

    return 0;
}