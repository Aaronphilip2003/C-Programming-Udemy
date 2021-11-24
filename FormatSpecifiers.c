#include<stdio.h>
int main()
{
    int a=10;
    float b=56.6777776777;
    char c='W';


    printf("Integer:%d\n",a);
    printf("Float:%f\n",b);
    printf("Character:%c\n",c);
    printf("Floating 2 decimals: %.3f\n",b);
    return 0;
}

/*
C programming has many format specifiers as mentioned above
%.3f specifies that we need only 3 a decimal precision
*/