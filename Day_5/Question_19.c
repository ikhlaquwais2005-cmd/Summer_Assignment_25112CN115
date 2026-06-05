#include<stdio.h>
int main()
{
    int number;
    int i;

    printf("Enter the number");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Enter positive number");
        return 0;
    }
    
    printf("factors of %d are:",number);
    for (i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}