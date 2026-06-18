#include <stdio.h>
int main()
{
    int size;
    int i;
    int j;
    int k;
    int arr[100];

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates is:\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}