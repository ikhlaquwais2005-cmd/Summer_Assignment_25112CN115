#include <stdio.h>
int sumDigits(int n)
{
    if (n==0)
        return 0;
    return (n%10)+sumDigits(n/10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Sum of digits= %d",sumDigits(number));
    return 0;
}