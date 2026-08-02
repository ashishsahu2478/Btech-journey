#include <stdio.h>

int main()

{
    int n,m,origin,rev=0;
    printf("Enter Your Number \n");
    scanf("%d",&n);
    origin=n;
        while (n!=0)
        {
            m=n%10;
            printf("%d",m);
            rev=rev*10+m;
            n=n/10;
        }    
        if (rev==origin)
        {
            printf("\nIts a Palindrome");

        }
        else
        {
        printf("\nIts Not a Palindrome");
        }


    return 0;
}