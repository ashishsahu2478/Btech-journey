#include <stdio.h>
int max(int arr[],int n);
int min(int arr[],int n);

int main()
{
    int size;
    printf("Enter The Size of Array : ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Max Of All Numbers : %d\n",max(arr,size));
    printf("Min Of All Numbers : %d\n",min(arr,size));
    printf("Difference Between %d and %d : %d",max(arr,size),min(arr,size),max(arr,size)-min(arr,size));
    return 0;
}

int max(int arr[],int n)
{
    int m=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (m<arr[i])
        {
            m = arr[i];
        }
    }
    return m;
}

int min(int arr[],int n)
{
    int m=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (m>arr[i])
        {
            m = arr[i];
        }
    }
    return m;
}