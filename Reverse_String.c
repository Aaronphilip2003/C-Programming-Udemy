#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter a string to check whether it is a palindrome or not:");
    scanf("%s",string);
    char reverse[100];
    int len=0;
    len=strlen(string);
    int len2=len-1;
    for(int i=0;i<len;i++)
    {
        char ch=string[i];
        reverse[len2]=ch;
        len2--;
        if (i==len-1)
        reverse[i+1]='\0';
    }
    printf("Reverse: %s",reverse);

    return 0;
}