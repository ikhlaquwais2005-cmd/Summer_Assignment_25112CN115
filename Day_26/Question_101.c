#include <stdio.h>
int main()
{
    int number=25;
    int guess;
    do
    {
        printf("Guess the number:");
        scanf("%d",&guess);

        if(guess>number)
        {
            printf("Too High\n");
        }
        else if(guess<number)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Hurray! You guessed the number.");
        }

    }while(guess!=number);
    return 0;
}