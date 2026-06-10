#include <stdio.h>
int main()
{
    int num;
    int rows;
    int spaces;
    int letters;

    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++)
    {
        for(spaces=1;spaces<=num-rows;spaces++)
        {
            printf(" ");
        }
        for(letters=1;letters<=rows;letters++)
        {
            printf("%c",64+letters);
        }
        for(letters=rows-1;letters>=1;letters--)
        {
            printf("%c",64+letters);
        }
        printf("\n");
    }
    return 0;
}