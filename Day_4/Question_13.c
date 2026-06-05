#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,t3;

    printf("Enter the limit of seires to be printed");
    scanf("%d",&n);

    if(n==1)
    {
        printf("The Fibonnaci series upto %d is:-%d\n",n,t1);
    }
    else
    {
        printf("%d %d",t1,t2);

        for(int i=2;i<=n;i++)
        {
            t3=t1+t2;
            printf(" %d ",t3);
            t1=t2;
            t2=t3;
        }
    }
}