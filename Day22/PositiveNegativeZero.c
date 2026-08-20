#include <stdio.h>
int Positive(int arr[],int n);
int Negative(int arr[],int n);
int Zeros(int arr[],int n);

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
    printf("Total Positive values Are : %d\n"
           "Total Negative values Are : %d\n"
           "Total values Equal To 0 Are : %d\n"
           ,Positive(arr,size),Negative(arr,size),Zeros(arr,size));
    return 0;
}

int Positive(int arr[],int n)
{
    int P=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            ++P;
        }
    }
    return P;
}

int Negative(int arr[],int n)
{
    int N=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            ++N;
        }
    }
    return N;
}
int Zeros(int arr[],int n)
{
    int Z=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            ++Z;
        }
    }
    return Z;
}