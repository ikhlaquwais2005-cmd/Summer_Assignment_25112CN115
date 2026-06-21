#include <stdio.h>
int main()
{
    char arr[100];
    int i;
    int length=0;
    char temp;

    printf("Enter the string:");
    scanf("%s",arr);

    while(arr[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }
    printf("The Reversed string is=%s",arr);
    return 0;
}