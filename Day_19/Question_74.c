#include <stdio.h>
int main()
{
    int rows,columns;
    int i,j;
    int arr1[10][10];
    int arr2[10][10];
    int diff[10][10];

    printf("Enter the number of rows:");
    scanf("%d",&rows);

    printf("Enter the number of columns:");
    scanf("%d",&columns);

    printf("Enter the elements of first matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<rows;i++)
    {
           for(j=0;j<columns;j++)
        {
            diff[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    printf("Difference of matrices is:-\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}