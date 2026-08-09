#include <stdio.h>

int main()
{
    int i,j,k,n=15;
    for ( i = 1; i <= n/2; i++)
    {  
        for ( k = 0; k < n/2-i; k++)
        {
            printf("  ");
        }
            for ( j = 1; j <= 2*i-1 ; j++)
            { 
               printf("* "); 
            }
            printf(" \n");
    }



    for ( i = n/2-1; i >= 1; i--)
    {  
        for ( k = 0; k < n/2-i; k++)
        {
            printf("  ");
        }
            for ( j = 1; j <= 2*i-1 ; j++)
            { 
               printf("* "); 
            }
            printf(" \n");
    }
 
    

    return 0;
}