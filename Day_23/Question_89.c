#include <stdio.h>
int main()
{
    char arr[100];
    int i,j;
    int count;

    printf("Enter the string:");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        count=0;
        for(j=0;arr[j]!='\0';j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("Thw first non-repeating character is=%c",arr[i]);
            return 0;
        }
    }
    printf("No non-repeating character was found");
    return 0;
}