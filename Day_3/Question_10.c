#include<stdio.h>
int main()
{
    int start,end;
    int prime=1;

    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Prime number between %d and %d are:",start,end);

    for(int i=start;i<=end;i++)
    {
        if(i<=1)
        {
            continue;
        }
        else
        {
            prime=1;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
            {
                printf("%d ",i);
            }
        }
    }
}