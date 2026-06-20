#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int i,j,k;
    int arr1[10][10];
    int arr2[10][10];
    int product[10][10];

    printf("Enter rows and columns of the first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of second matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }
    
    printf("Enter elements of the first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            product[i][j]=0;

            for(k=0;k<c1;k++)
            {
                product[i][j]=product[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("the Product matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}