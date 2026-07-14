#include <stdio.h>
#include <string.h>
int main()
{
    char word[10][50];
    char temp[50];
    int size;
    int i,j;

    printf("Enter the number of words:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter word number %d:",i+1);
        scanf("%s",word[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strlen(word[i])>strlen(word[j]))
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }

    printf("The words sorted by length are:\n");
    for(i=0;i<size;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}