#include <stdio.h>
int main()
{
    int size;
    int firstIndex,secondIndex;
    int arr[100];

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(firstIndex=0;firstIndex<size;firstIndex++)
    {
        printf("Enter element %d:",firstIndex+1);
        scanf("%d",&arr[firstIndex]);
    }
    printf("The duplicate elements are:\n");

    for(firstIndex=0;firstIndex<size;firstIndex++)
    {
        for(secondIndex=firstIndex+1;secondIndex<size;secondIndex++)
        {
            if(arr[firstIndex]==arr[secondIndex])
            {
                printf("%d ",arr[firstIndex]);
                break;
            }
        }
    }
    return 0;
}