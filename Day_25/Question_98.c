#include <stdio.h>
int main()
{
    char arr1[100];
    char str2[100];
    int i,j;

    printf("Enter the first string:");
    gets(arr1);
    printf("Enter the second string: ");
    gets(str2);

    printf("The common characters are:");
    for(i=0;arr1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(arr1[i]==str2[j])
            {
                printf("%c ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}