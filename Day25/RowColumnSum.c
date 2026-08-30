#include <stdio.h>

void SumRow(int r,int c,int arr[r][c]);
void SumColumn(int r,int c,int arr[r][c]);

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
    SumRow(size1,size2,arr);
    SumColumn(size1,size2,arr);
    return 0;
}


void SumRow(int r,int c,int arr[r][c])
{
    int i,j,sum=0;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum+=arr[i][j];
        }
        printf("Sum of all the elements of %d row : %d \n",i+1,sum);
        sum=0;
    }
}


void SumColumn(int r,int c,int arr[r][c])
{
    int j,i,sum=0;
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            sum+=arr[j][i];
        }
        printf("Sum of all the elements of %d column : %d \n",j+1,sum);
        sum=0;
    }
}