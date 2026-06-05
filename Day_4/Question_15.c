#include<stdio.h>
#include<math.h>
int main()
{
    int originalnum;
    int sum=0;
    int digits=0;
    int d,tempnum;
    int checknum;

    printf("Enter a number:-");
    scanf("%d",&originalnum);

    checknum=originalnum;
    tempnum=originalnum;

    while(tempnum>0)
    {
        tempnum=tempnum/10;
        digits++;
    }
    if(originalnum<0)
    {
        printf("The entered number is not an Armstrong number");
    }

    while(originalnum>0)
    {
        d=originalnum%10;
        sum=sum+pow(d,digits);
        originalnum=originalnum/10;
    }

    if(sum==checknum)
    {
        printf("%d is an Armstrong number",checknum);

    }
    else
    {
        printf("%d is not an Armstrong number",checknum);
    }
    return 0;
}