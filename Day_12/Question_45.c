#include <stdio.h>
int isPalindrome(int number)
{
    int originalnum;
    int reverse=0;
    int d;

    originalnum=number;
    while(number>0)
    {
        d=number%10;
        reverse=reverse*10+d;
        number=number/10;
    }
    if(originalnum==reverse)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d",&number);

    if(isPalindrome(number))
    {
        printf("%d is a palindrome number",number);
    }
    else
    {
        printf("%d is not a palindrome number",number);
    }
    return 0;
}