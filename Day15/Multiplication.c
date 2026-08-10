#include <stdio.h>
void table()
{
    int n;
    printf("Enter the number Whose Table You Want to Print\n");
    scanf("%d",&n);
    for ( int i = 1; i <= 10; i++)
    {
       printf("%d * %d = %d\n",n,i,n*i);
    }
    
}

int main()
{
    table();

    return 0;
}
