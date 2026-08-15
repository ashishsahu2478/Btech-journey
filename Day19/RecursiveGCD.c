#include <stdio.h>

int GCD(int a ,int b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

int main()
{
    int a,b;
    printf("Input 2 Numbers :");
    scanf("%d%d",&a,&b);
    printf("GCD of the 2 numbers : %d",GCD(a,b));


    return 0;
}