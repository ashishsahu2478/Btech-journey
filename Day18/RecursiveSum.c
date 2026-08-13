#include <stdio.h>
int Sum(int n);

int main()
{
    int n;
    printf("Enter Your Integer : ");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}

int Sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n + Sum(n-1);
}
    