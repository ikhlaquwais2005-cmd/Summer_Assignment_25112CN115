#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[100];
    char arr2[100];
    char temp;
    int i,j;
    int length;

    printf("Enter the first string:");
    scanf("%s",arr1);
    printf("Enter the second string:");
    scanf("%s",arr2);

    length=strlen(arr1);
    for(i=0;i<length;i++)
    {
        temp=arr1[0];
        for(j=0;j<length-1;j++)
        {
            arr1[j]=arr1[j+1];
        }
        arr1[length-1]=temp;
        if(strcmp(arr1,arr2)==0)
        {
            printf("The strings are rotations");
            return 0;
        }
    }
    printf("The strings are not rotations");
    return 0;
}