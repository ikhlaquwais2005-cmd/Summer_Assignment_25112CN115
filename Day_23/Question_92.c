#include <stdio.h>
int main()
{
    char arr1[100];
    char max;
    int i,j;
    int count;
    int maxCount=0;

    printf("Enter the string:");
    gets(arr1);

    for(i=0;arr1[i]!='\0';i++)
    {
        count=0;
        for(j=0;arr1[j]!='\0';j++)
            if(arr1[i]==arr1[j])
            {
                count++;
            }
        }
        if(count>maxCount)
        {
            maxCount=count;
            max=arr1[i];
        }
    printf("THe maximum occurring character is=%c",max);
    return 0;
}