#include <stdio.h>
#include <string.h>

void RemoveDuplicate(int n,char str[n]);

int main()
{
    char str[50];
    int size;
    printf("Enter Your String : ");
    scanf("%49[^\n]",str);
    size = strlen(str);
    RemoveDuplicate(size,str);
    return 0;
}

void RemoveDuplicate(int n,char str[n]){
    int i,j,k;
    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (str[i]==str[j])
            {
                for ( k = j; k < n-1 ; k++)
                {
                    str[k]=str[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("String After Removing Duplicates : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%c ",str[i]);
    }
    printf("\n");
}