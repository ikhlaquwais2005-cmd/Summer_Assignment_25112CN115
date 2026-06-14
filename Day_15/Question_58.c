#include <stdio.h>
int main()
{
    int size, i;
    int arr[100];
    int temp;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];

    for(i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    printf("The array after left rotation is:\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}