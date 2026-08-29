#include <stdio.h>

void Check(int r,int c,int arr[r][c]);

int main()
{
    int size1,size2;
    printf("Enter the number of rows\n");
    scanf("%d",&size1);

    printf("Enter the number of columns\n");
    scanf("%d",&size2);

    int arr[size1][size2];
    printf("Input Elements\n");
    int i,j;
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            printf("Enter Element of [%d] Row and [%d] Column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    Check(size1,size2,arr);
    return 0;
}

void Check(int r,int c,int arr[r][c])
{
    printf("\nELements are :\n");
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}