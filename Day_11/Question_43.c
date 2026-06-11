#include <stdio.h>
int isPrime(int number)
{
    int divisor;
    if(number<=1)
    {
        return 0;
    }
    for(divisor=2;divisor<number;divisor++)
    {
        if(number%divisor==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d",&number);

    if(isPrime(number))
    {
        printf("%d is a prime number",number);
    }
    else
    {
        printf("%d is not a prime number",number);
    }
    return 0;
}