#include<stdio.h>
#include<stddef.h>

int arraySum(int arr[],int n)
{
    int *ptr;
    int *const arrayEnd=arr+n;
    int sum=0;

    for(ptr=arr;ptr<arrayEnd;ptr++)
    {
        sum+=*ptr;
    }

    return sum;

}

int main()
{
    int size=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[1000];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of the Array:%d",arraySum(arr,size));

    return 0;
}