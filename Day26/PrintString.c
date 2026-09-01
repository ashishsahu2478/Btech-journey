#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20],age[2],favSport[20];
    printf("Enter Your Name : ");
    scanf("%[^\n]s",name); 
    printf("Enter Your Age : ");
    scanf("%s",age);
    printf("Whats Your Favorite Sport : ");
    scanf("%s",favSport);
    printf("My name is %s and i am %s years old, also my fovorite sport is %s..\n",name,age,favSport);
    printf("Total size of Your name is %d ",strlen(name)-1);
    return 0;
}