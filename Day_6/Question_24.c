#include <stdio.h>
int main()
{
    int base;
    int power;
    int result=1;
    int i;

    printf("Enter the base(x):");
    scanf("%d",&base);
    printf("Enter the power(n):");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("%d^%d = %d",base,power,result);
    return 0;
}
