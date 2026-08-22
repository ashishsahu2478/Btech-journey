#include <stdio.h>

void RemoveDuplicate(int arr[],int n);

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
    RemoveDuplicate(arr,size);
    return 0;
}

void RemoveDuplicate(int arr[],int n)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; 
            }
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}  
