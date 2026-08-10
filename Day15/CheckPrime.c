#include <stdio.h>
int isPrime(int n);
int main()
{
    int n;
    printf("Enter Your Integer To Be Checked\n");
    scanf("%d",&n);
    printf("%d",isPrime(n));
    return 0;
}

int isPrime(int n)
{
    int prime=0;
    for (int i = 1; i <=n/2; i++)
    {
        if (n%i==0)
        {
            prime++;
        } 
    }
    return prime==1 ? 1:0;    
}

