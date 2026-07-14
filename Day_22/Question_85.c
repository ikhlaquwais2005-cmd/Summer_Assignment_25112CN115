#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,length;
    int palindrome=1;

    printf("Enter the string:");
    scanf("%s",str);

    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome==1)
    {
        printf("The given string is a palindrome string");
    }
    else
    {
        printf("The given string is not a palindrome string");
    }
    return 0;
}