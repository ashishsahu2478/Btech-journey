#include <stdio.h>

void Count(int r,int c,int arr[r][c]);

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
    Count(size1,size2,arr);
    return 0;
}

void Count(int r,int c,int arr[r][c])
{
    int i,j,O=0,E=0;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (arr[i][j]%2==0)
            {
                E++;
            }
            else
            {
                O++;
            }
        }
    }
    printf("Total no of even elements = %d and Odd = %d",E,O);
}