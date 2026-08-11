 #include <stdio.h>
  void fibonacci(int n);

 int main()
 {
   int n;
   fibonacci(n);
   return 0;
 }

  void fibonacci(int n)
  {
   int num1=0,num2=1,fib=0;
   printf("Enter Your Number : ");
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
     printf("%d ",fib);
     fib=num1+num2;
     num1=num2;
     num2=fib;
   }
  }