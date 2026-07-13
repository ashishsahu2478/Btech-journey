#include <stdio.h>
 
int main()
{
    int salary;
    float HRA,DA,Total;
    printf("Enter Your Basic Salary\n ");
    scanf("%d",&salary);
    HRA=salary*20.0/100.0;
    DA=salary*50.0/100.0;
    Total=HRA+DA+salary;
    printf("HRA = %.2f\n",HRA);
    printf("DA = %.2f\n",DA);
    printf("Total Gross Salary = %.2f",Total);

    return 0;
}