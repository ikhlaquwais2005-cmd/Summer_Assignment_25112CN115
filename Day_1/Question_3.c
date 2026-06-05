#include<stdio.h>
int main()
{
    int number;
    int factorial=1;
    int i;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if(number<0)
    {
        printf("You entered a negative number.Please enter a positive number.");
    }
    else
    {
        for(i=1;i<=number;i++)
        {
            factorial=factorial*i;
        }
        printf("The factorial of %d is: %d",number,factorial);
    }
}