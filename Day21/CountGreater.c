#include <stdio.h>
void count(int arr[],int n);

int  main ()
{
    int size,temp;
    printf("Enter The Size Of Array : ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    count(arr,size);
    return 0;
}

void count(int arr[],int n)
{
    int sum = 0,i,temp=0;
    for ( i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum/n;
    
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>avg)
        {
            temp++;
        }
    }
   printf("Total Elements Greater Then The Average are : %d",temp);
}