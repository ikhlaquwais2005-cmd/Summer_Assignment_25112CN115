#include <stdio.h>
int main()
{
    char arr[100];
    int i,j;

    printf("Enter the string: ");
    gets(arr);

    for(i=0;arr[i]!='\0';i++)
    {
        for(j=i+1;arr[j]!='\0';j++)
        {
            if(arr[i]==arr[j])
            {
                printf("The first repeating character is=%c",arr[i]);
                return 0;
            }
        }
    }
    printf("No repeating character was found");
    return 0;
}