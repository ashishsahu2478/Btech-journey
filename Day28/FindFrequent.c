#include <stdio.h>
#include <string.h>

void check (int size,char str[size]);

int main() {
    int size;
    char str[50];
    printf("Enter Your String To Be Checked\n");
    scanf("%49[^\n]",str);
    size = strlen(str);
    check(size,str);
    return 0;
}

void check (int size,char str[size]) {
    int C=1,arr[size],Frequent = 0;
    char Character;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (str[i]==str[j])
            {
               ++C;
            } 
        }
        arr[i]=C;
        C=1;  
    }
    for (int i = 0; i < size; i++)
    {
       if (Frequent<arr[i])
       {
        Frequent = arr[i];
        Character = str[i];
       }
    }
    printf("The most Frequent Character in the entered string : %c and it appeared %d times",Character,Frequent);
}