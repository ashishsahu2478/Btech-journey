#include <stdio.h>

int main() 
{
    int arr[] = {1,2,5,3,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int rev[size];
    int j=0;

    for (int i = size-1 ; i >= 0 ; i--)
    {
        rev[j++]=arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",rev[i]);
    }
    
    return 0;
}