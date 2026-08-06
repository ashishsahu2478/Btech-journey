#include <stdio.h>

int main()
{
    int choice,Balance=0,deposit,Withdraw;
    do
    {
        printf("\n\n\n1. Check Balance\n"
        "2. Deposit\n"
        "3. Withdraw\n"
        "4. Exit\n"
        "Please Enter Your Choice\n");
        scanf(" %d",&choice);
        switch (choice)
        {
        case 1:
          printf("Balance = %d\n",Balance);
            break;
        case 2:
          printf("Enter The Amount You Need To Deposit\n");
          scanf(" %d",&deposit);
          if (deposit>0)
          {
            printf("Amount Successfully Credited To your Account\n");
            Balance=Balance+deposit;
          }
          else
          {
            printf("Please Enter A Valid Amount\n");
          }
          break;
        case 3:
          printf("Please Enter The Amount You Need To Withdraw\n");
          scanf(" %d",&Withdraw); 
          if (Withdraw>Balance)
          {
            printf("Low Balance\n");
          }
          else if (Withdraw<=Balance)
          {
            Balance=Balance-Withdraw;
            printf("Successfully Withdrawn Rs %d\n Updated Balance = %d\n",Withdraw,Balance);
          }
          else
          {
            printf("Please Enter A Valid Amount\n");
          }
          break;
        case 4:
          printf("Have A Good Day \n\n\n");  
          break;
        default:
          printf("Please Enter A valid Choice\n");
            break;
        }
        
    } while (choice!=4);

    return 0;
}