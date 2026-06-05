#include <stdio.h>
int main()
{
    int number;
    int tempnum;
    int digit;
    int sum=0;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Strong number is not defined for negative numbers.");
        return 0;
    }

    tempnum=number;
    while(tempnum>0)
    {
        digit=tempnum%10;
        int fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        tempnum=tempnum/10;
    }

    if (sum==number)
    {
        printf("%d is a Strong Number.",number);
    }
    else
    {
        printf("%d is not a Strong Number.",number);
    }
    return 0;
}