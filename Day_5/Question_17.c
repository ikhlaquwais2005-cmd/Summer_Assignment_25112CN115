#include<stdio.h>
int main()
{
    int number;
    int sum=0;
    int i;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0||number==0)
    {
        printf("Invalid input, perfect number is not negative");
        return 0;
    }

    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==number)
    {
        printf("%d is a perfect number",number);
    }
    else
    {
        printf("%d is not a perfect number",number);
    }
    return 0;
}

