#include <stdio.h>
int main()
{
    int size1,size2;
    int i;
    int arr1[100];
    int arr2[100];
    int mergedArray[200];

    printf("Enter size of the first array:");
    scanf("%d",&size1);

    for(i=0;i<size1;i++)
    {
        printf("Enter element %d of first array:",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of the second array:");
    scanf("%d",&size2);

    for(i=0;i<size2;i++)
    {
        printf("Enter element %d of second array:",i+1);
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<size1;i++)
    {
        mergedArray[i]=arr1[i];

    }
    for(i=0;i<size2;i++)
    {
        mergedArray[size1+i]=arr2[i];
    }
    printf("The merged array is:\n");
    
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ",mergedArray[i]);
    }
    return 0;
}