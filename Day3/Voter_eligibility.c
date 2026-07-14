#include <stdio.h>

int main()
{
    int age,B;
    char name[20];
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your Age\n");
    scanf("%d",&age);
    if (age>=18)
    {
    printf("Hello %s ,you are eligible to vote\n",name);
    }
    else 
    {
    (B=18-age);
    printf("Hello %s ,You will be eligible to vote in %d years",name,B);
    }
    
    return 0;
}