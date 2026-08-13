#include <stdio.h>

int Addition(int a,int b);
int Substraction(int a,int b);
int Multiplication(int a,int b);
double Division(int a,int b);

int main()
{
    int choice,a,b;
    do
           {
    printf("\n1. Addition of 2 numbers \n"
           "2. Substraction of 2 numbers \n"
           "3. Multiplication of 2 Numbers \n"
           "4. Division of 2 Numbers \n"
           "5. Exit\n" );

           printf("Enter Your Choice :\n\n");
           scanf("%d",&choice);
           switch (choice)
           {
           case 1:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nSum of %d and %d : %d",a,b,Addition(a,b));
            break;

           case 2:
            printf("Enter 2 Number : \n");
            scanf("%d",&a);
            printf("\nSubstraction of %d and %d : %d",a,b,Substraction(a,b));
            break;

           case 3:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nMultiplication of %d and %d : %d",a,b,Multiplication(a,b));
            break;

           case 4:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nDivision of %d and %d : %.2f",a,b,Division(a,b));
            break; 

           case 5:
            printf("Have a Nice Day");
            break; 

           default:
           printf("Invalid Choice !!!");
            break;
           }
           
           } while (choice!=5);
           
   
    return 0;
}

//Sum of 2 Numbers
int Addition(int a,int b)
{
    return a+b;
}

//Substraction
int Substraction(int a,int b)
{
    return a-b;
} 

//Multiplication of 2 Numbers
int Multiplication(int a,int b)
{
    return a*b;
}

//Division of A and B
double Division(int a,int b)
{
    return (double)a/b;
}

