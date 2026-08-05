#include <stdio.h>

int main()

{
    int i,choice,n=0,C=0,m,rev=0;
    do
    { 
    printf(" ===== MENU =====\n"
           "1. Check Even/Odd\n"
           "2. Check Prime\n"
           "3. Reverse Number\n"
           "4. Count Digits\n"
           "5. Exit\n\n"
           "Enter choice: ");
           scanf(" %d",&choice);
           switch (choice)
           {



           case 1:
            printf("Enter Your Integer\n");
            scanf(" %d",&i);
            if (i%2==0)
            {
                printf("Even Number\n\n\n");
            }
            else
            {
                printf("Odd Number\n\n\n");
            }
            break;



           case 2:
            i=0,C=0;
            printf("Enter Your Integer\n");
            scanf(" %d",&n);
            if (n>1)
            {
            for ( i = 1; i <= n; i++)
            {
            if (n%i==0)
            {
            C++;
            }
            }
            if (C==2)
            {
            printf("Its A Prime Number\n\n\n");
            }
            else
            {
            printf("Its Not A Prime Number\n\n\n");
            }
            }
            else
            {
            printf("Please Enter A Positve Whole Number");
            }
            break;



          case 3:
           rev=0;
           printf("Enter The Number To Be Reversed \n");
           scanf(" %d",&n);
           while (n!=0)
           {
            m=n%10;
            rev=rev*10+m;
            n=n/10;
           }
           printf("Reversed Number = %d \n\n\n",rev);

           break;



          case 4:
          C=0;
           printf("Enter Your Integer \n");
           scanf(" %d",&n);
           while (n!=0)
           { 
            m=n%10;
            C++;
            n=n/10;
           }
          printf("Total Digits = %d\n\n\n",C);
          break;



          case 5:
          printf("Exiting.....");
          break;
           default:
           printf("Please Enter a valid Choice \n");
            break;
           }
    } while (choice!=5);

    return 0;
  


}