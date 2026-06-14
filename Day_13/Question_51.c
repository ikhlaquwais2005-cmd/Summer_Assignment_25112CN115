#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int largest;
    int smallest;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];

    for(i=1;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("The Largest element is= %d\n",largest);
    printf("The Smallest element is= %d",smallest);
    return 0;
}