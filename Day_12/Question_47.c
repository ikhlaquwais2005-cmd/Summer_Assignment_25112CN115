#include <stdio.h>
void fibonacci(int terms)
{
    int term1=0;
    int term2=1;
    int term3;
    int count;

    for(count=1;count<=terms;count++)
    {
        printf("%d ",term1);
        term3=term1+term2;
        term1=term2;
        term2=term3;
    }
}

int main()
{
    int terms;

    printf("Enter number of terms:");
    scanf("%d",&terms);

    fibonacci(terms);
    return 0;
}