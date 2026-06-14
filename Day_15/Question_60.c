#include <stdio.h>
int main()
{
    int size;
    int i;
    int position=0;
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
        if(arr[i]!=0)
        {
            arr[position]=arr[i];
            position++;
        }
    }

    while(position<size)
    {
        arr[position]=0;
        position++;
    }
    printf("The array after moving zeroes to end is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}