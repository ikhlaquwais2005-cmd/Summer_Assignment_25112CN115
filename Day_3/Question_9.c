#include<stdio.h>
int main()
{
    int number;
    int prime=1;
    int i;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<=1)
    {
        printf("Entered number is not a prime number");
    }
    else if(number<0)
    {
        printf("Enter a positive number");
    }
    else
    {
        for(i=2;i<number;i++)
        if(number%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d is a prime number",number);
    }
    else
    {
        printf("%d is not a prime number",number);
    }
}