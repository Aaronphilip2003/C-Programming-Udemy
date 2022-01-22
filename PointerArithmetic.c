#include<stdio.h>
#include<stddef.h>
#include<string.h>
int main()
{
    int i;
    char multiple[]="aaron";
    char *p=multiple;

    for(i=0;i<strlen(multiple);i++)
    {
        printf("multiple[%d] = %c  *(p+%d) = %c  &multiple[%d] = %p p+%d = %p\n",i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);
    }

    return 0;
}