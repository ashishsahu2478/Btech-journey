#include <stdio.h>

void CheckPalindrome()
{
    int mod,rev=0;
    long long n;
    printf("Enter Your Integer To Be Checked\n");
    scanf("%lld",&n);
    long long origin=n;
    while(n!=0)
    { 
        mod=n%10;
        n=n/10;
        rev=rev*10+mod;
    }
    if (rev==origin)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }    
}
int main()
{
    CheckPalindrome();

    return 0;
}


