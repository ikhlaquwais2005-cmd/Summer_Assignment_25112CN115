#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int search;
    int frequency=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find frequency:");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            frequency++;
        }
    }
    printf("The frequency of %d is=%d",search,frequency);
    return 0;
}