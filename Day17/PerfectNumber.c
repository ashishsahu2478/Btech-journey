#include <stdio.h>
  void PerfectNumber(int num);

 int main()
 {
   int num;
   printf("Enter Your Number : ");
   scanf("%d",&num);
   PerfectNumber(num);
   return 0;
 }

  void PerfectNumber(int num)
  {
    int i,result=0;
    for ( i = 1; i <= num/2; i++)
    {
        if (num%i==0)
        {
            result=result+i;
        }
    }
    if (result==num)
        {
            printf("%d Is A Perfect Number",num);
        }
        else
        {
            printf("%d Is Not A Perfect Number",num);
        }
  }