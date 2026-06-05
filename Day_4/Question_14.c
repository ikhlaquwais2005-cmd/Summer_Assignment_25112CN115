#include<stdio.h>
int main()
{
    int number,term1=0,term2=1,term3;

    printf("Enter the limit of seires to be printed");
    scanf("%d",&number);

    if(number<=0)
    {
        printf("The 0th term of the Fibonnaci series is:-0\n");
    }
    else if(number==1)
    {
        printf("The 1st term of the Fibonnaci series is:-1\n");
    }
    else
    {
        for(int i=2;i<=number;i++)
        {
            term3=term1+term2;
            term1=term2;
            term2=term3;
        }
        printf("The %dth term of the Fibonnaci series is:-%d\n",number,term2);
    }
}