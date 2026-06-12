#include <stdio.h>
int isPerfect(int number)
{
    int i;
    int sum=0;
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
   
    if(sum==number)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if(isPerfect(number))
    {
        printf("%d is a perfect number",number);
    }
    else
    {
        printf("%d is not a perfect number",number);
    }
    return 0;
}