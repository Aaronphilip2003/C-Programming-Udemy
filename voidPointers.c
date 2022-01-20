#include<stdio.h>
#include<stddef.h>
int main()
{
    int i=10;
    float f=12.5;
    char ch='a';

    void *vptr;

    vptr=&i;
    printf("The value that vptr points to is:%d\n",*(int*)(vptr));

    vptr=&f;
    printf("The value that vptr points to is:%.2f\n",*(float*)vptr);

    vptr=&ch;
    printf("The value that vptr points to is:%c\n",*(char*)vptr);



    return 0;
}