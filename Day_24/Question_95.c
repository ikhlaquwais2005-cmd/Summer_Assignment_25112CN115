#include <stdio.h>
int main()
{
    char arr[100];
    char longest[100];
    int i=0,j=0;
    int length=0;
    int maxLength = 0;
    int start=0, k;

    printf("Enter a sentence: ");
    gets(arr);

    while(1)
    {
        if(arr[i] != ' ' && arr[i] != '\0')
        {
            length++;
        }
        else
        {
            if(length > maxLength)
            {
                maxLength = length;
                start = i - length;
            }

            length = 0;
        }

        if(arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    for(k = 0; k < maxLength; k++)
    {
        longest[k] = arr[start + k];
    }

    longest[k] = '\0';

    printf("Longest word = %s", longest);

    return 0;
}