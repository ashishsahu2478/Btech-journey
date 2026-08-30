#include <stdio.h>

void Transpose(int r,int c,int arr[r][c]);

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
    Transpose(size1,size2,arr);
    return 0;
}


void Transpose(int r,int c,int arr[r][c])
{
    printf("\nOriginal Matrix :\n");
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the original matrix :\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}