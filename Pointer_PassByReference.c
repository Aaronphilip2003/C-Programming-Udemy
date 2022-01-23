#include<stdio.h>
#include<stddef.h>
void square(int * const x);

int main()
{
    int x=97;
    square(&x);

}

void square(int * const x)
{
    printf("The square of the number is: %d",(*x) * (*x));
}