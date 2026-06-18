#include <stdio.h>
int main()
{
    int size1,size2;
    int i,j;
    int arr1[100];
    int arr2[100];

    printf("Enter size of the first array:");
    scanf("%d",&size1);
    for(i=0;i<size1;i++)
    {
        printf("Enter element %d of the first array:",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of the second array:");
    scanf("%d",&size2);
    for(i=0;i<size2;i++)
    {
        printf("Enter element %d of the second array:",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("Common elements or arrays are:-\n");
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}