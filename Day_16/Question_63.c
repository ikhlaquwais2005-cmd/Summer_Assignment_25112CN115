#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[100];
    int sum;
    int found=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the desired sum:");
    scanf("%d",&sum);

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("Pair found, which is:- %d and %d\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found==0)
    {
        printf("No pair was found");
    }
    return 0;
}