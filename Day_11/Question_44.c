#include <stdio.h>
int factorial(int number)
{
    int result=1;
    int count;

    for(count=1;count<=number;count++)
    {
        result=result*count;
    }
    return result;
}

int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Factorial=%d",factorial(number));
    }
    return 0;
}