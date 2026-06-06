#include <stdio.h>
int main()
{
    int number;
    int choice;
    int count=0;
    int digit;

    printf("1.Decimal number\n");
    printf("2.Binary number\n");
    printf("Enter your choice of input:-");
    scanf("%d",&choice);
    printf("Enter the number:");
    scanf("%d",&number);

    if(choice==1)
    {
        while(number>0)
        {
            if(number%2==1)
            {
                count++;
            }
            number=number/2;
        }
    }
    else if(choice==2)
    {
        while(number>0)
        {
            digit=number%10;
            if(digit!=1&&digit!=0)
            {
                printf("Invalid input");
                return 0;
            }
            if(number%10==1)
            {
                count++;
            }
            number=number/10;
        }
    }
    printf("Number of set bits is:-%d",count);
    return 0;
}