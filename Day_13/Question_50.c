#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int sum=0;
    float average;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    average=(float)sum/size;

    printf("The sum is=%d\n",sum);
    printf("The average is=%.2f",average);
    return 0;
}