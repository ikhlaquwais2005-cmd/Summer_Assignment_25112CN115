#include <stdio.h>
int main()
{
    char arr[100];
    int i=0;
    int vowels=0;
    int consonants=0;

    printf("Enter a string:");
    scanf("%s",arr);

    while(arr[i]!='\0')
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        i++;
    }
    printf("The NUmber of vowels is=%d\n",vowels);
    printf("The number of consonants is=%d",consonants);
    return 0;
}