#include <stdio.h>
#include <math.h>
  void armstrong(int n);

 int main()
 {
   int n;
   printf("Enter Your Number : ");
   scanf("%d",&n);
   armstrong(n);
   return 0;
 }

  void armstrong(int n)
  {
   int num2=0,origin,k,count=0;
   origin=n;
   while (origin!=0)
   {
    origin=origin/10;
    ++count;
   }
   origin=n;
   while (origin!=0)
   {
    k=origin%10;
    num2=num2+round(pow(k,count));
    origin=origin/10;
   }
   if (num2==n)
   {
    printf("%d Is An Armstrong Number\n",n);
   }
   else 
   {
    printf("%d Is Not An Armstrong Number\n",n);
   }
  }