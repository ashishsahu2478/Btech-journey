#include <stdio.h>

int Largest(int arr[],int n);
int SecondLargest(int arr[],int n);

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
    printf("The Second Largest ELement In The Given Array : %d",SecondLargest(arr,size));
    
    return 0;
}

int Largest(int arr[],int n)
{
    int L = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>L)
        {
            L=arr[i];
        }
    }
    return L;
}

int SecondLargest(int arr[],int n)
{
    int largest = Largest(arr, n);
    int SL=arr[0];
    if (arr[0] != largest)
    {
        SL = arr[0];
    }
    else
    {
        SL = arr[1];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest && (arr[i] > SL))
        {
            SL=arr[i];
        }
    }
    return SL;
}

