#include<stdio.h>
int main()
{
    int number;
    int product=1;
    int d;

    printf("enter a number:");
    scanf("%d",&number);

    while(number>0)
    {
        d=number%10;
        product=product*d;
        number=number/10;
    }
    printf("The product of the digits of number is: %d",product);
    return 0;
}