#include <stdio.h>
int main()
{
    int size;
    int i,j;
    int arr[100];
    int freq;
    int maxfreq=0;
    int maxNum;

    printf("Enter size of the array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        freq=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        if(freq>maxfreq)
        {
            maxfreq=freq;
            maxNum=arr[i];
        }
    }
    printf("Element with the maximum frequency is=%d\n",maxNum);
    printf("THe frequency of element is=%d",maxfreq);
    return 0;
}