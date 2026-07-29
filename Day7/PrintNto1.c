#include <stdio.h>

int main()

{
    int n,i;
    printf("Enter Your Integer\n");
    scanf("%d",&n);
    if (n>0)
    {
        for ( i = n; i>=1; i--)
    {
        
        printf("%d ",i);   
    }
    }
    else
    {
        printf("Invalid input Please enter a positive Integer");
    }
    

    return 0;
}