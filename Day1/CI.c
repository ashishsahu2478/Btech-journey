#include <stdio.h>
#include <math.h>
 
int main()
{
    double Principle,Rate,TimeDuration;
    printf("Please Enter The Principle Amount\n");
    scanf("%lf",&Principle);
    printf("Please Enter The Rate of Intrest\n");
    scanf("%lf",&Rate);
    printf("Please Enter The Loan Tenure In Years\n");
    scanf("%lf",&TimeDuration);
    double n = (1+(Rate/100));
    double power = pow(n,TimeDuration);
    double CI = Principle*power;
   
    printf("Your total Final Value = %.2lf\n ",CI); 
    printf("Your total Compunded Intrest is = %.2lf",CI-Principle);
     
    return.0;
}