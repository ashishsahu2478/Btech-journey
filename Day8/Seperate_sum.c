#include <stdio.h>

int main()

{
    int n,m,i,sum=0;
    printf("Enter Your Number \n");
    scanf("%d",&n);
    printf("reversed Number = ");
        while (n!=0)
        {
            m=n%10;
            printf("%d",m);
            sum=sum+m;
            n=n/10;
        }    
    

    printf("\nSum = %d", sum);


    return 0;
}