#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[10][10];
    int sum=0;

    printf("Enter the size of square matrix:");
    scanf("%d",&size);

    printf("Enter the elements of matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<size;i++)
    {
        sum=sum+arr[i][i];
    }
    printf("The sum of diagonal elements is=%d",sum);
    return 0;
}