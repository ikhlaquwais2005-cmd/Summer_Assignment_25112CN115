#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int search;
    int left;
    int right;
    int middle;
    int found=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in the sorted order:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search:");
    scanf("%d",&search);
    left=0;
    right=size-1;

    while(left<=right)
    {
        middle=(left+right)/2;

        if(arr[middle]==search)
        {
            found=1;
            break;
        }
        else if(arr[middle]<search)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }
    }

    if(found)
    {
        printf("Element found at the position %d",middle+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}