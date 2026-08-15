#include <stdio.h>

int Reverse(int InputNum, int num)
{
    if (InputNum==0)
    {
        return num;
    }
    num=(num*10)+(InputNum%10);
    return Reverse(InputNum/10,num);
}

int main()
{
    int inputNum;
    printf("Enter the number to be reversed : ");
    scanf("%d",&inputNum);

    int result = Reverse(inputNum,0);
    printf("Reversed Number : %d",result);
    return 0;
}