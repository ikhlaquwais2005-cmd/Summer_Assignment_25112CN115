#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][50];
    char temp[50];
    int size;
    int i,j;

    printf("Enter the number of names:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter name %d:",i+1);
        scanf("%s",name[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("The names in alphabetical order are:\n");
    for(i=0;i<size;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}