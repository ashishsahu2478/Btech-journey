#include <stdio.h>

int ReverseDigits();


int main()
{
    printf("%d",ReverseDigits());

    return 0;
}

int ReverseDigits()
{
    int mod,rev=0;
    long long n;
    printf("Enter Your Integer To Be Reversed\n");
    scanf("%lld",&n);
    while(n!=0)
    { 
        mod=n%10;
        n=n/10;
        rev=rev*10+mod;
    }
    return rev;
    
}