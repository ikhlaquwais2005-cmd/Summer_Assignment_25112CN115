#include <stdio.h>
int isArmstrong(int number)
{
    int originalnum;
    int d;
    int sum=0;

    originalnum=number;
    while(number>0)
    {
        d=number%10;
        sum=sum+(d*d*d);
        number=number/10;
    }
    if(sum==originalnum)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if(isArmstrong(number))
    {
        printf("%d is an Armstrong number",number);
    }
    else
    {
        printf("%d is not an Armstrong number",number);
    }
    return 0;
}