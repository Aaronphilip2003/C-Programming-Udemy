#include<stdio.h>
void add(float a,float b);
void subtract(float a,float b);
void multiply(float a,float b);
void divide(float a,float b);


void add(float a,float b)
{
    printf("%f\n",(a+b));
}
void subtract(float a,float b)
{
    printf("%f\n",(a-b));
}
void multiply(float a,float b)
{
    printf("%f\n",(a*b));
}
void divide(float a,float b)
{
    printf("%f\n",(a/b));
}
int main()
{
    add(20,10);
    subtract(20,10);
    multiply(20,10);
    divide(20,10);
    return 0;
}