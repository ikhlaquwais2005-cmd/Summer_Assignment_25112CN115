#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int tempsum=0;
    int realsum=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        realsum=realsum+arr[i];
    }

    for(i=1;i<=size+1;i++)
    {
        tempsum=tempsum+i;
    }
    printf("The missing number is= %d",tempsum-realsum);
    return 0;
}