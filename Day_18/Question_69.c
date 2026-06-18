#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[100];
    int temp;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array is:-\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}