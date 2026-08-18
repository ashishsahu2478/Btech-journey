#include <stdio.h>
void swap(int arr[],int n);

int main()
{
    int i, size;
    printf("Enter The Size of Array : ");
    scanf("%d", &size);
    printf("Enter The Elements Of The Array : \n");
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Before Swapping : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray After Swapping : ");
    swap(arr, size);
    return 0;
}
void swap(int arr[], int n)
{
    int temp;
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}