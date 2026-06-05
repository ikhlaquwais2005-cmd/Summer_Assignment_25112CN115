#include<stdio.h>
int main()
{
    int number;
    int i,n;
    int count=0;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0)
    {
        number=number*(-1);
    }
    else if(number==0)
    {
        count=1;
    }
    else
    {
        while(number>0)
        {
            count++;
            number=number/10;
        }
    }
    printf("The number of digits in the entered number is: %d",count);
    return 0;
}