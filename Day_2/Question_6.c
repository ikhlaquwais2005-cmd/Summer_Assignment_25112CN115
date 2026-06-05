#include<stdio.h>
int main()
{
    int number;
    int reverse=0;
    int d;

    printf("enter a number:");
    scanf("%d",&number);

    while(number>0)
    {
        d=number%10;
        reverse=reverse*10+d;
        number=number/10;
    }
    printf("The reverse of the number is: %d",reverse);
    return 0;
}