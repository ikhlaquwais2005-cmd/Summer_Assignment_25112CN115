#include<stdio.h>
int main()
{
    int Number;
    int i;
    int sum=0;

    printf("Enter a positive number: ");
    scanf("%d", &Number);
    
    if(Number<0)
    {
        printf("You entered a negative number. Please enter a positive number.");
    }
    else
    {
        for(i=1; i<=Number; i++)
        {
            sum=sum+i;
        }
        printf("The sum of first %d natural numbers is: %d", Number, sum);
    }
    return 0;
}