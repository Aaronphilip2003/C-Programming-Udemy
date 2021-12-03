#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]={"hello"};
    char string2[6]={'h','e','l','l','o','\0'};
    printf("%s\n",string1);
    printf("%s\n",string2);
    char name[100];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Hello! %s\n",name);

    for(int i=0;i<strlen(name);i++)
    {
        printf("%c\n",name[i]);
    }
    return 0;
}