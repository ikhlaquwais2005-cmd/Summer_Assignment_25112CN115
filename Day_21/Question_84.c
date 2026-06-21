#include <stdio.h>
int main()
{
    char arr[100];
    int i=0;

    printf("Enter a string:");
    scanf("%s",arr);

    while(arr[i]!='\0')
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=arr[i]-('a'-'A');
        }
        i++;
    }
    printf("The string in uppercase is=%s",arr);
    return 0;
}