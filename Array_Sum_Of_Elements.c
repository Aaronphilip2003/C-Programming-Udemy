#include<stdio.h>
int main()
{
    printf("Enter 10 numbers:\n");
    int numbers[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Element:");
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    printf("The sum of the entered Elements:%d\n",sum);
    return 0;
}