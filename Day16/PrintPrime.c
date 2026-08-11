#include <stdio.h>
void primesBetween(int start, int end);

int main()
{
    int start,end,n;
    printf("Enter The starting number\n");
    scanf("%d",&start);
    printf("Enter The Ending number\n");
    scanf("%d",&end);
    printf("Prime Numbers Between %d and %d :",start,end);
    primesBetween(start,end);
    return 0;
}

void primesBetween(int start, int end)
{
    int prime,i,k;
    for (k = start; k <= end; k++)
    {
        prime=0;
        for (i = 1; i <=k/2; i++)
    {
        if (k%i==0)
        {
            prime++;
        } 
    } 
    if (prime==1)
    {
        printf("%d ",k);
    }
    }  
}
