#include <stdio.h>

int countDigits();


int main()
{
    printf("%d",countDigits());

    return 0;
}

int countDigits()
{
    int C=1;
    long long n;
    printf("Enter Your Integer\n");
    scanf("%lld",&n);
    while(n>=10)
    {
        n=n/10;
        C++;
    }
    return C;
    
}