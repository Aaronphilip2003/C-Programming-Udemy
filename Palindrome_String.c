#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter a string to check whether it is a palindrome:\n");
    scanf("%s",string);
    int len=strlen(string);
    int len2=len-1;
    char reverse[100];
    for(int i=0;i<len;i++)
    {
        char ch=string[i];
        reverse[len2]=ch;
        len2--;
        if (i==len-1)
        {
            reverse[i+1]='\0';
        }
    }
    int flag=0;
    for(int i=0;i<len;i++)
    {
        char ch=string[i];
        char revch=reverse[i];
        if (ch!=revch)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%s is a palindrome",string);
    }
    else
    {
        printf("%s is not a palindrome",string);
    }


    return 0;
}