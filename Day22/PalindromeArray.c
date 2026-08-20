#include <stdio.h>
void Palindrome(int arr[],int n);

int  main ()
{
    int size,temp,p=1;
    printf("Enter The Size Of Array : ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    Palindrome(arr,size);
   
    return 0;
}

void Palindrome(int arr[],int n)
{
    int i,j,p=1;
    for ( i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            p = 0;
            break;
        }
    }
     if (p==0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}
