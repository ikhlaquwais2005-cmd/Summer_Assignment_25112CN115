#include <stdio.h>
int rev=0;
int reverse(int n)
{
    if (n==0)
    return rev;
    rev=rev*10+n%10;
    return reverse(n/10);
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Reverse= %d",reverse(number));
    return 0;
}