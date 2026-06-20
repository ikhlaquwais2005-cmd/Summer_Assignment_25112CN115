#include <stdio.h>
int main()
{
    int rows,columns;
    int i,j;
    int arr[10][10];
    int sum;

    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns:");
    scanf("%d",&columns);

    printf("Enter elements of matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        sum=0;
        for(j=0;j<columns;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("The Sum of row %d is=%d\n",i+1,sum);
    }
    return 0;
}