#include <stdio.h>
int main()
{
    int age;
    printf("PLease enter your age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Congratulations! You are eligible to vote");
    }
    else
    {
        printf("Unfortunately, You are not eligible to vote");
    }
    return 0;
}