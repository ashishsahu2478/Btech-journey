#include <stdio.h>
#include <string.h>

int main() 
{
    int size,i,p=1;
    char str[100];
    printf("Enter Your String To check :");
    scanf("%s",str);
    size = strlen(str)-1;
    for (i = 0; i < size/2; i++)
    {
        if (str[i]!=str[size-1-i])
        {
            p=0;
        }
    }
        if (p==0)
        {
            printf("The Entered String is Not a Palindrome");
        }
        else
        {
            printf("The Given String is a Palindrome");
        }
    return 0;
}