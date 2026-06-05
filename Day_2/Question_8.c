#include<stdio.h>
int main()
{
    int originalnum;
    int reversenum=0;
    int d;
    int checknum;

    printf("Enter a number:");
    scanf("%d",&originalnum);

    checknum=originalnum;
    if(originalnum<0)
    {
        printf("the entered number is not a palindrome number");
    }

    while(originalnum>0)
    {
        d=originalnum%10;
        reversenum=reversenum*10+d;
        originalnum=originalnum/10;
    }

    if(reversenum==checknum)
    {
        printf("%d is a palindrome number",checknum);

    }
    else
    {
        printf("%d is not a palindrome number",checknum);
    }
    return 0;
}