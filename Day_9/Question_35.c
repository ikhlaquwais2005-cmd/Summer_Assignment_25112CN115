#include <stdio.h>
int main()
{
    int num;
    int rows;
    int columns;

    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++)
    {
        for(columns=1;columns<=rows;columns++)
        {
            printf("%c",64+rows);
        }
        printf("\n");
    }
    return 0;
}