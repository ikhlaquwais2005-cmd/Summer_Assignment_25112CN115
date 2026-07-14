#include <stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int arr3[200];
    int size1,size2;
    int i=0,j=0,k=0;

    printf("Enter size of the first array:");
    scanf("%d",&size1);
    printf("Enter elements of the first sorted array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of the second array:");
    scanf("%d",&size2);
    printf("Enter elements of the second sorted array:\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    i=0;
    j=0;
    while(i<size1&&j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }

    printf("The merged array is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}