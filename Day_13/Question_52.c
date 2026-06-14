#include <stdio.h>
int main()
{
    int size,i;
    int arr[100];
    int even=0;
    int odd=0;

    printf("Enter size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The Number of even elements are=%d\n",even);
    printf("The Number of odd elements are=%d",odd);
    return 0;
}