#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,secretNumber,score=0,win=0,loss=0,totalscore=0,choice;
    double averagescore=0;
    int attempt=1;
    srand(time(NULL));
    do
    {   
     printf(" ===== MENU =====\n"
           "1. Start A New Game\n"
           "2. View Score\n"
           "3. play Again\n"
           "4. Exit\n\n"
           "Enter choice: ");
           scanf(" %d",&choice);
            
    switch (choice)
        {
            case 1:
            win=0,loss=0,score=0,totalscore=0,averagescore=0;
            case 3:
            attempt=1;
            secretNumber = rand()%100 + 1;
             do
            {           
    printf("Enter Your Guess Between 1-100\n");
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
            score=110-attempt*10;
            printf("Correct Guess Total attempts = %d\n""Your Score = %d\n",attempt,score);
            win++;
            totalscore=totalscore+score;
            break;
        }
        attempt++;
             } while (attempt<=10);
             if (guess!=secretNumber)
             {
              printf("You Lost Total Attempts Exceded 10\n");
            printf("Your Secret Number Was %d\n",secretNumber);
            loss++;
             }
              if (win>0)
              {
                averagescore=(double)totalscore/win;
              }
              break;
              
            case 2:
     printf("===== STATISTICS =====\n"
            "Games Played : %d\n"
            "Wins         : %d\n"
            "Losses       : %d\n"
            "Last Score   : %d\n"
            "Total Score  : %d\n"
            "Average Score: %.2f\n",win+loss,win,loss,score,totalscore,averagescore);
     break;   
            case 4:
     printf("Thanks For Playing \n");  
     break;
     default:
     printf("Please Enter A valid Choice \n");
     break;   
    }
}while (choice!=4);
    

    

    return 0;
}

