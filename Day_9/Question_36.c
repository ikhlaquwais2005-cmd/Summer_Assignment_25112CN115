#include <stdio.h>
int main()
{
    int size;
    int rows;
    int columns;

    printf("Enter the size of square:");
    scanf("%d",&size);

    for(rows=1;rows<=size;rows++)
    {
        for(columns=1;columns<=size;columns++)
        {
            if(rows==1||rows==size||columns==1||columns==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}