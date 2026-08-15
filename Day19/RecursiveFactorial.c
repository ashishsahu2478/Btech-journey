#include <stdio.h>
int Factorial(int n);

int main()
{
    int n;
    printf("Enter Your Integer : ");
    scanf("%d",&n);
    printf("%d",Factorial(n));
    return 0;
}

int Factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n * Factorial(n-1);
}
    