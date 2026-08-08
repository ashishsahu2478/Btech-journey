#include <stdio.h>

int main ()
{
    int i,j,n=10;
             if (n % 2 == 0)
             {
             n--;
             }

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
            {
            if (i==(n+1)/2||i+j==(n+3)/2||j-i==(n-1)/2)      
            {
                printf("* "); 
            }
            else 
            {
                printf("  ");
            }
            
            }
        printf("\n");
        
    }
    return 0;
}