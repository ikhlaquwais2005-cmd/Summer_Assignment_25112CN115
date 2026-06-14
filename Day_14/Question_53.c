#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int search;
    int found=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            printf("The element found at the position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }
    return 0;
}