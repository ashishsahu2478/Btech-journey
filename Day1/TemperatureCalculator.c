#include <stdio.h>

int main()
{
    int Temp ;
    float F ;
    printf("Put Temperature In Celsius\n");
    scanf("%d",&Temp);
    F=(9.0/5.0)*Temp+32;
    printf("Temperature In Farenhite = %.2f",F);

    return 0;
    
}
