#include <stdio.h>
int main()
{
    int rows,columns;
    int i,j;
    int arr[10][10];
    int transpose[10][10];

    printf("Enter the number of rows:");
    scanf("%d",&rows);

    printf("Enter the number of columns:");
    scanf("%d",&columns);

    printf("Enter the elements of matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }

    printf("Transpose of matrix is:-\n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}