#include <stdio.h>

int main() {
float num1 = 210000, num2 = 90;
int add = num1+num2,sub = num1-num2,product = num1*num2;
float div = num1/num2;
printf("********************\n  SIMPLE CALCULATOR   \n********************");
printf("\nNumber 1 = %.0f",num1);
printf("\nNumber 2 = %.0f",num2);
printf("\n\nAddition       = %d",add);
printf("\nSubstraction   = %d",sub);
printf("\nMultiplication = %d",product);
printf("\nDivision       = %.2f",div); 
}