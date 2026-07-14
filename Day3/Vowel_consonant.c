#include <stdio.h>

int main()
{
    char c;
    printf("Enter your character \n");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
       || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
    printf("Your Character is a Vowel");
    }
    else
    {
    printf("Your Character is a Consonant");
    }
    
    return 0;

}