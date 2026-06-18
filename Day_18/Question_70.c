#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[100];
    int temp;
    int min;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("Sorted array is:-\n");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}