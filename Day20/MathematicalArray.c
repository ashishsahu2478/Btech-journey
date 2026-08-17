#include <stdio.h>
int sum(int arr[],int n);
float avg(int arr[],int n);
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
    printf("Sum Of Numbers : %d\n",sum(arr,size));
    printf("Average Of Given Numbers : %.2f\n",avg(arr,size));
    printf("Max Of All Numbers : %d\n",max(arr,size));
    printf("Min Of All Numbers : %d\n",min(arr,size));
    return 0;
}

int sum(int arr[],int n)
{
    int sum = 0;
    for ( int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

float avg(int arr[],int n)
{
    int s= sum(arr,n);
    return (float)s/n;
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