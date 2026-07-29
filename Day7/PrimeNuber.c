#include <stdio.h>

int main()

{
    int n,i,C=0;
    printf("Enter Your Integer\n");
    scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
    if (n%i==0)
    {
        C++;
    }
}
if (C==2)
{
    printf("Its A Prime Number");
}
else
{
    printf("Its Not A Prime Number");
}

    return 0;
}