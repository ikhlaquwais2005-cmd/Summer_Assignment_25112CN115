#include <stdio.h>
int main()
{
    char str[100];
    int i=0;

    printf("Enter a string:");
    gets(str);

    printf("String after removing spaces:");
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}