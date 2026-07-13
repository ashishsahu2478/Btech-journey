#include <stdio.h>

int main()
{
    int Chemistry,Physics,Maths,Computer,English;
    printf("Enter Marks For Chemistry\n");
    scanf("%d",&Chemistry);
    printf("Enter Marks For Physics\n");
    scanf("%d",&Physics);
    printf("Enter Marks For Maths\n");
    scanf("%d",&Maths);
    printf("Enter Marks For Computer\n");
    scanf("%d",&Computer);
    printf("Enter Marks For English\n");
    scanf("%d",&English);
    int Total = Chemistry+Physics+Maths+Computer+English;
    float Average = Total/5.0;
    printf("Total Marks = %d\n",Total );
    printf("Average Marks = %.2f",Average);

    return 0;

}
