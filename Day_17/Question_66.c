#include <stdio.h>
int main()
{
    int size1;
    int size2;
    int i,j;
    int arr1[100],arr2[100],unionarr[200];
    int unionSize=0;
    int found;

    printf("Enter size of the first array:");
    scanf("%d",&size1);
    for(i=0;i<size1;i++)
    {
        printf("Enter element %d of the first array:",i+1);
        scanf("%d",&arr1[i]);
        unionarr[unionSize]=arr1[i];
        unionSize++;
    }
    
    printf("Enter size of the second array:");
    scanf("%d",&size2);
    for(i=0;i<size2;i++)
    {
        printf("Enter element %d of the second array:",i+1);
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<size2;i++)
    {
        found=0;
        for(j=0;j<unionSize;j++)
        {
            if(arr2[i]==unionarr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            unionarr[unionSize]=arr2[i];
            unionSize++;
        }
    }
    printf("Union of arrays is:\n");

    for(i=0;i<unionSize;i++)
    {
        printf("%d ",unionarr[i]);
    }
    return 0;
}