//Swap 2 numbers without using 3rd variable;
#include <stdio.h>

int main()
{
    int A,B;
    printf("Enter First Integer\n");
    scanf("%d",&A);
    printf("Enter Second Integer\n");
    scanf("%d",&B);
    printf("Value before Swapping\n A = %d\n B = %d\n",A,B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("Value After swapping\n A = %d\n B = %d\n",A,B);

    return 0;

}

