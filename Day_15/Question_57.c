#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array in reverse order is:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}