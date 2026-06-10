#include <stdio.h>
int main()
{
    int num;
    int rows;
    int spaces;
    int stars;
 
    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=num;rows>=1;rows--)
    {
        for(spaces=1;spaces<=num-rows;spaces++)
        {
            printf(" ");
        }
        for(stars=1;stars<=(2*rows-1);stars++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}