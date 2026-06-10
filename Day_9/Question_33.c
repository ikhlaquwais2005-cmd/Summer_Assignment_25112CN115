#include <stdio.h>
int main()
{
    int num;
    int rows;
    int columns;

    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=num;rows>=1;rows--)
    {
        for(columns=1;columns<=rows;columns++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}