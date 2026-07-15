#include <stdio.h>

int main()

{
double rating;
printf("Please rate this film betwneen 0 to 5\n");
scanf("%lf",&rating);
if (rating>=0.0 && rating<=2.0)
{
    printf("Flop");
}
else if (rating>=2.1 && rating<=3.4)
{
    printf("Semi Hit");
}
else if (rating>=3.5 && rating<=4.4)
{
    printf("Hit");
}
else if (rating>=4.5 && rating<=5.0)
{
    printf("Super Hit");
}
else
{
    printf("Invalid Entry");
}
return 0;
}