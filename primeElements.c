#include<stdio.h>
int main()
{
    int prime[100];
    int k=0;
    for(int j=1;j<=100;j++)
    {
        int number=j;
        int count=0;
        for(int i=1;i<=number;i++)
        {
            if (number%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            prime[k]=number;
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d\n",prime[i]);
    }
    return 0;
}