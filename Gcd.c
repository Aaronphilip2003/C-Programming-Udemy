#include<stdio.h>
int gcd(int a,int b);

int gcd(int a,int b)
{
    int max=0;
    int ans=0;
    if (a>b)
    max=a;
    else if (b>a)
    max=b;
    else
    max=b;
    for(int i=1;i<max;i++)
    {
        if(a%i==0 && b%i==0)
        ans=i;
    }
    return ans;

}

int main()
{
    int result=gcd(100,110);
    printf("GCD:%d\n",result);
    return 0;
}