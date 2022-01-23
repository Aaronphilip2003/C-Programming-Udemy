#include<stdio.h>
#include<stddef.h>
int lengthChar(char *cstring);


int lengthChar(char *cstring)
{
    char *last=cstring;
    while(*last)
    {
        last++;
    }
    return last-cstring;
}


int main()
{
    char word[1000];
    printf("Length of the string is:%d",lengthChar("aaron philip"));
    return 0;
}