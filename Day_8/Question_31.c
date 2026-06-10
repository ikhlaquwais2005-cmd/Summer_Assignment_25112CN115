#include <stdio.h>
int main()
{
    int num;
    int rows;
    int letter;

    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++)
    {
        for(letter=1;letter<=rows;letter++)
        {
            printf("%c",64+letter);
        }
        printf("\n");
    }
    return 0;
}