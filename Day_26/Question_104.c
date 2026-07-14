#include <stdio.h>
int main()
{
    int answer;
    int score=0;

    printf("********** QUIZ APPLICATION **********\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer:");
    scanf("%d",&answer);
    if(answer==2)
    {
        score++;
    }

    printf("\nQ2. Which language is used for C programming?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer:");
    scanf("%d",&answer);
    if(answer==1)
    {
        score++;
    }

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer:");
    scanf("%d",&answer);
    if(answer==3)
    {
        score++;
    }

    printf("\nQ4. Which is the largest planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if(answer==3)
    {
        score++;
    }

    printf("\nQ5. Which symbol is used to end a C statement?\n");
    printf("1. .\n2. ;\n3. :\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer==2)
    {
        score++;
    }

    printf("\n=========================\n");
    printf("Your Score is=%d/5\n", score);
    if(score==5)
    {
        printf("Excellent!You scored full!\n");
    }
    else if(score>=3)
    {
        printf("Good Job!But i can be better\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }
    return 0;
}