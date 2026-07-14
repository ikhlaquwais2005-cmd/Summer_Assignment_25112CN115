#include <stdio.h>
int main()
{
    char arr[100];
    int i;
    int count;

    printf("Enter the string:");
    gets(arr);
    printf("The compressed string is:");
    i=0;
    while(arr[i]!='\0')
    {
        count=1;
        while(arr[i]==arr[i+1])
        {
            count++;
            i++;
        }    
        if(count>1)
        {
            printf("%c%d",arr[i],count);
        }
        else
        {
            printf("%c", arr[i]);
        }
        i++;
    }
    return 0;
}