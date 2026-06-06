#include <stdio.h>
int main()
{
    int decimal;
    int binary=0;
    int digit=1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while(decimal>0)
    {
        binary=binary+(decimal%2)*digit;
        digit=digit*10;
        decimal=decimal/2;
    }
    printf("Binary number is:-%d",binary);
    return 0;
}