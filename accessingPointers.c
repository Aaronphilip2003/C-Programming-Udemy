#include<stdio.h>
#include<stddef.h>

int main()
{
    int count=10,x;
    int *int_pointer;
    int_pointer=&count;

    printf("Value of count:%i\n",count);
    printf("Address of count in memory is:%p\n",(void*)&int_pointer);
    printf("Value that the pointer points to:%i\n",*int_pointer);
    printf("Bytes occupied by the pointer in memory:%d\n",sizeof(int_pointer));

    return 0;
}