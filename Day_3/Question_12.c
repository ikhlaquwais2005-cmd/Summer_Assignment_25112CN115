#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int tempnum;
    int originalnum1;
    int originalnum2;
    int gcd, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1<0||num2<0)
    {
        printf("GCD is undefined for negative numbers");
        return 0;
    }

    originalnum1=num1;
    originalnum2=num2;

    while(num2>0)
    {
        tempnum=num2;
        num2=num1%num2;
        num1=tempnum;
    }

    gcd=num1;

    lcm=(originalnum1*originalnum2)/gcd;
    printf("LCM of %d and %d is= %d\n",originalnum1,originalnum2,lcm);
    return 0;
}