#include <stdio.h>
int main()
{
    int binary;
    int decimal=0;
    int base=1;
    int digit;

    printf("Enter a binary number:");
    scanf("%d",&binary);

    if(binary<0)
    {
        printf("Please enter a positive binary number");
        return 0;
    }
    
    while(binary>0)
    {
        digit=binary%10;
        decimal=decimal+digit*base;
        base=base*2;
        binary=binary/10;
    }
    printf("Decimal number=%d",decimal);
    return 0;
}