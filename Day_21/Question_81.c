#include <stdio.h>
int main()
{
    char arr[100];
    int i=0;
    int length=0;

    printf("Enter a string:");
    scanf("%s",arr);

    while(arr[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length of string=%d",length);
    return 0;
}