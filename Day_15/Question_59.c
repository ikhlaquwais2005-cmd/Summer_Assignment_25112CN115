#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int temp;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    temp=arr[size-1];

    for(i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("The array after right rotation is:\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}