#include<stdio.h>
int main()
{
    int number;
    int range;
    int i;

    printf("Enter the number whose multiplication table you want to print: ");
    scanf("%d", &number);
    printf("Enter the range of the multiplication table: ");
    scanf("%d", &range);

    for(i=1;i<=range;i++)
    {
        printf("%d x %d = %d\n", number, i,number*i);
    }
    return 0;
}