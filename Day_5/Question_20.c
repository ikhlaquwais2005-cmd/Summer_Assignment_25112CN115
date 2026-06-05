#include <stdio.h>

int main()
{
    int number,i,j,prime;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=number;i>=2;i--)
    {
        if(number%i==0)
        {
            prime=1;

            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }

            if(prime==1)
            {
                printf("Largest prime factor is= %d",i);
                break;
            }
        }
    }
    return 0;
}