#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int larg,secondLarg;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    larg=secondLarg=arr[0];

    for(i=1;i<size;i++)
    {
        if(arr[i]>larg)
        {
            secondLarg=larg;
            larg=arr[i];
        }
        else if(arr[i]>secondLarg && arr[i]!=larg)
        {
            secondLarg=arr[i];
        }
    }
    printf("The second largest element is=%d",secondLarg);
    return 0;
}