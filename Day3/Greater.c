#include <stdio.h>

int main()
{
    int A,B;
    printf("Enter 2 Integers\n A and B");
    scanf("%d%d",&A,&B);
    if(A>B)
    {
    printf("A is Greater and is equal to = %d\n",A);
    }
    else if (A<B)
    {
    printf("B is Greater and is equal to = %d\n",B);
    }
    else
    {
    printf("Both are equal");
    }

    return 0;
}