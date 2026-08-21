#include <stdio.h>

void Even(int arr[],int n);
void Odd(int arr[],int n);

int main()
{
    int size;
    printf("Enter The Size of Array : ");
    scanf("%d",&size);
    printf("Enter The Elements Of The Array : \n");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    Even(arr,size);
    Odd(arr,size);
    
    return 0;
}

void Even(int arr[],int n)
{
    int E=0;
    printf("Even Elements are : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            E=1;
            printf("%d ",arr[i]);
        }
    }
    if (E==0)
    {
        printf("No Even Elements In The Given Array\n");
    }
    
}

void Odd(int arr[],int n)
{
    int O=0;
    printf("\nOdd Elements Are : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        {
            O=1;
            printf("%d ",arr[i]);
        }
    }
    if (O==0)
    {
        printf("No Odd Elements In The Given Array\n");
    }
}