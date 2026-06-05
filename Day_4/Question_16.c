#include<stdio.h>
#include<math.h>
int main()
{
    int start,end;
    int originalnum;
    int sum;
    int digits;
    int d,tempnum;
    int checknum;

    printf("Enter the starting number of range:-");
    scanf("%d",&start);
    printf("Enter the ending number of range:-");
    scanf("%d",&end);

    for(originalnum=start;originalnum<=end;originalnum++)
    {
        checknum=originalnum;
        tempnum=originalnum;
        digits=0;
        sum=0;

    while(tempnum>0)
    {
        tempnum=tempnum/10;
        digits++;
    }
    tempnum=originalnum;

    while(tempnum>0)
    {
        d=tempnum%10;
        sum=sum+pow(d,digits);
        tempnum=tempnum/10;
    }

    if(sum==checknum||checknum==0)
    {
        printf("%d ",checknum);
    }
}
    printf("\n");
    return 0;
}