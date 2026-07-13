#include <stdio.h>


int main()
{
int A,B,C,D;
printf("Give me values\n");
scanf("%d\n%d\n%d\n%d",&A,&B,&C,&D);
printf("Check your values \n");
printf("%d\n%d\n%d\n%d\n",A++,++B,C--,--D);
printf("Check your values \n");
printf("%d\n%d\n%d\n%d",A,B,C,D);



}