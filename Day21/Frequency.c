#include <stdio.h>
int frequency(int arr[],int n,int num);

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

    printf("Enter The Number Whose Frequency Is To Be Checked : ");
    scanf("%d",&num);

    printf("The Number Of Times %d Repeated In The Given Array : %d",num,frequency(arr,size,num));
    return 0;
}

int frequency(int arr[],int n,int num)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            ++count;
        }
    }
    return count;
}