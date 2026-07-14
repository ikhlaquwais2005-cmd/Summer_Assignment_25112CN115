#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[100];
    char arr2[100];
    char temp;
    int i,j;

    printf("Enter the first string:");
    scanf("%s",arr1);
    printf("Enter the second string");
    scanf("%s",arr2);

    for(i=0;arr1[i]!='\0';i++)
    {
        for(j=i+1;arr1[j]!='\0';j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;arr2[i]!='\0';i++)
    {
        for(j=i+1;arr2[j]!='\0';j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    if(strcmp(arr1,arr2)==0)
    {
        printf("The strings are anagrams");
    }
    else
    {
        printf("The strings are not anagrams");
    }
    return 0;
}