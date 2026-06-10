#include <stdio.h>
int main()
{
    int num;
    int rows;
    int spaces;
    int numbers;

    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++)
    {
        for(spaces=1;spaces<=num-rows;spaces++)
        {
            printf(" ");
        }
        
        for(numbers=1;numbers<=rows;numbers++)
        {
            printf("%d",numbers);
        }
        for(numbers=rows-1;numbers>=1;numbers--)
        {
            printf("%d",numbers);
        }
        printf("\n");
    }
    return 0;
}