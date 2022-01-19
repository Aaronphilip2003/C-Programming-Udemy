#include<stdio.h>
#include<stddef.h>
int main()
{
    int value=1001;
    int *pvalue=&value;

    printf("Value of address in memory:%p\n",&pvalue);

    printf("Value in the memory address:%i\n",*pvalue);

    printf("Value to which the points to:%i\n",value);


    return 0;
}