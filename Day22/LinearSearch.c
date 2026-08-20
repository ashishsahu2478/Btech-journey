#include <stdio.h>
int Search(int arr[],int n,int num);

int main()
{
    int size,num;
    printf("Enter The Size of Array : ");
    scanf("%d",&size);
    printf("Enter The Elements Of The Array : \n");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter The Number To Be Checked : ");
    scanf("%d",&num);
    int temp = Search(arr,size,num);
    if (temp == -1)
    {
        printf("Number Not Found");
    }
    else
    {
        printf("Number Found And The position Of %d In The Given Array : %d / at index %d",num,temp+1,temp);
    }
    return 0;
}

int Search(int arr[],int n,int num)
{
    for (int i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            return i;
        }
    }
    return -1;
}