#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int P=0,i,CaseConvert=0;
    printf("Enter Your String \n");
    scanf("%49[^\n]",str);

    int size = strlen(str);

    for ( i = 0; i < size; i++)
    {
        P=(int)str[i];
        if (P>=65 && P<=90)
        {
            CaseConvert=P+32;
            printf("%c",(char)CaseConvert);
        }
        else if (P>=97 && P<=122)
        {
            CaseConvert=P-32;
            printf("%c",(char)CaseConvert);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}