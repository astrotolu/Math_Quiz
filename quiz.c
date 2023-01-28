#include <stdio.h>

#include <time.h>

int main()
{

    int response;
    int x;
    int answer;
    int randNum1;
    int randNum2;
    int correctQuestions = 0;
    int incorrectQuestions = 0;

    srand(time(NULL));

    printf("\nEnter the number of questions you would love to answer: ");
    scanf("%d", &response);

    for (x = 0; x < response; x++)
    {

        randNum1 = rand() % 10 + 1;
        randNum2 = rand() % 20 + 1;

        printf("\nWhat is %d * %d: ", randNum1, randNum2);
        scanf("%d", &answer);

        if (answer == randNum1 * randNum2)
        {

            printf("\nCORRECT!\n");
            correctQuestions++;
        }
        else
        {

            printf("\nINCORRECT!\n");
            printf("The correct answer is %d\n", randNum1 * randNum2);
            incorrectQuestions++;
        } // end if
    }     // end loop

    printf("\nYou answered %d number of questions correctly and %d number of questions incorrectly\n", correctQuestions, incorrectQuestions);
    return 0;
} // end main
