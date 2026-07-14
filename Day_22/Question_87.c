#include <stdio.h>
int main()
{
    char str[100];
    char alpha;
    int i=0;
    int count = 0;

    printf("Enter the string:");
    gets(str);

    printf("Enter the character to find frequency:");
    scanf("%c",&alpha);

    while(str[i]!='\0')
    {
        if(str[i]==alpha)
        {
            count++;
        }
        i++;
    }
    printf("The frequency of '%c' is=%d",alpha,count);
    return 0;
}