#include<stdio.h>
int main()
{
    char string[20];
    int count=0;
    printf("Enter a string:");
    scanf("%s",string);
    for(int i=0;i<20;i++)
    {
        if(string[i]=='\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}