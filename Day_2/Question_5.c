#include<stdio.h>
int main()
{
    int number;
    int d;
    int sum=0;

    printf("enter a number:");
    scanf("%d",&number);

    while(number>0)
    {
        d=number%10;
        sum=sum+d;
        number=number/10;
    }
    printf("the sum of the digits of entered number is: %d",sum);
    return 0;
}