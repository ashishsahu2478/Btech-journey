#include <stdio.h>

int Max(int a,int b);
int EvenOdd(int a);
int Sum(int a,int b);
int Power(int a,int b);
int PositveNegetive(int a);
int largest(int a,int b,int c);
long long Factorial(int a);

int main()
{
    int choice,a,b,c;
    do
           {
    printf("\n1. Maximum of 2 numbers \n"
           "2. Even or Odd \n"
           "3. Sum of 2 Numbers \n"
           "4. Find Power \n"
           "5. Postive or Negetive \n"
           "6. Largest of 3 numbers \n"
           "7. Factorial of a Number \n"
           "8. Exit\n" );

           printf("Enter Your Choice :\n\n");
           scanf("%d",&choice);
           switch (choice)
           {
           case 1:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nMax value : %d",Max(a,b));
            break;

           case 2:
            printf("Enter a Number : \n");
            scanf("%d",&a);
            printf("\nAnswer : %d",EvenOdd(a));
            break;

           case 3:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nYour Sum : %d",Sum(a,b));
            break;

           case 4:
            printf("Enter 2 Numbers : \n");
            scanf("%d%d",&a,&b);
            printf("\nYour Answer : %d",Power(a,b));
            break;

           case 5:
            printf("Enter a Number : \n");
            scanf("%d",&a);
            printf("\nYour Answer : %d",PositveNegetive(a));
            break;

            case 6:
            printf("Enter 3 Numbers : \n");
            scanf("%d%d%d",&a,&b,&c);
            printf("\nLargest of 3 : %d",largest(a,b,c));
            break;

           case 7:  
            printf("Enter a Number : \n");
            scanf("%d",&a);
            printf("\nFactorial of %d : %lld ",a,Factorial(a));
            break; 

           case 8:
            printf("Have a Nice Day");
            break; 

           default:
           printf("Invalid Choice !!!");
            break;
           }
           
           } while (choice!=8);
           
   
    return 0;
}

//Max of 2 Numbers
int Max(int a,int b)
{
    return a>=b ? a:b;
}

//Even or Odd
int EvenOdd(int a)
{
    return a%2==0 ? 1:0;
} 

//Sum of 2 Numbers
int Sum(int a,int b)
{
    return a+b;
}

//A to the Power b
int Power(int a,int b)
{
    int Pow=1;
    for (int i = 1; i <= b; i++)
    {
        Pow = Pow*a;
    }  
    return Pow;
}

//check positive and Negetive
int PositveNegetive(int a)
{
    return a>0 ? 1: a<0 ? -1 : 0;

}

//Check largest of 3 numbers
int largest(int a,int b,int c)
{
    return a>b && a>c ? a: b>a && b>c ? b:c;

}

//To find factotial of a Number
long long Factorial(int a)
{
    int factorial=1;
    for (int i = 1; i <= a; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}