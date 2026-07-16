#include <stdio.h>

int main()

{
   char Vow;
   printf("Enter Your Character\n");
   scanf("%c",&Vow);
   switch (Vow)
   {
case 'A' :
case 'E' :
case 'I' :
case 'O' :
case 'U' :
case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :
    printf("Given character is a Vowel\n");
    break;
default :
    printf("Given character is a Consonant\n");
    break;
   }

return 0;
}
