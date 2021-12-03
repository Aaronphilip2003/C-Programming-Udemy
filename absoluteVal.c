#include<stdio.h>
int abs(int a);

int abs(int a)
{
    int ans;
    if (a>0)
    ans=a;
    else if (a<0)
    ans=0-(a);
    else
    ans=0;

}

int main()
{
    int result=0;
    result=abs(-1002123);
    printf("ABSOLUTE VALUE: %d\n",result);
    return 0;
}