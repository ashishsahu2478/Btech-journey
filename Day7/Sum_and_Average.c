#include <stdio.h>

int main()

{
    int n,i,sum=0;
    double average;
    printf("Enter Your Integer\n");
    scanf("%d",&n);
    if (n>0)
    {
        for ( i = 1; i<=n; i++)
    {
        sum=sum+i;  
    }
    printf("Sum = %d \n",sum);
    printf("Average = %.2f \n",average=(double)sum/n);
    }
    else 
    {
    printf("Invalid input Please enter a positive Integer");
    }
    return 0;
}