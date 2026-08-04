#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,secretNumber;
    int attempt=1;
    srand(time(NULL));
    secretNumber = rand()%100 + 1;
    printf("Enter Your Guess Between 1-100\n");
    do
    {
        scanf("%d",&guess);

        if (guess>100 || guess<1)
        {
            printf("Invalid Input Please Enter A Number Between 1 and 100\n");
        }
        else if (guess>secretNumber)
        {
            printf("Too High\n");
        }
        else if (guess<secretNumber)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Correct Guess Total attempts = %d",attempt);
        }
        attempt++;
    } while (guess!=secretNumber);
    
    
    return 0;
}