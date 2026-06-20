#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[10][10];
    int symmetric=1;

    printf("Enter the size of square matrix:");
    scanf("%d",&size);

    printf("Enter elements of matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                symmetric=0;
                break;
            }
        }
    }

    if(symmetric)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
    return 0;
}