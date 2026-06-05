#include <stdio.h>
int main()
{
    int num1; 
    int num2;
    int tempnum;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    while (num2>0)
    {
        tempnum=num2;
        num2=num1%num2;
        num1=tempnum;
    }

    printf("GCD =%d\n",num1);
    return 0;
}