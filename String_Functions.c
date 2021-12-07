#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="hello my name is ";
    int length=strlen(string);// string length
    printf("The length of the string is: %d\n",length);

    // Copying a string into another string

    char destination_String[50];
    char source[]="aaron";
    strncpy(destination_String,source,sizeof(destination_String)-1);
    printf("Copied String: %s\n",destination_String);
    printf("Length of the copied string: %d\n",strlen(destination_String));

    // String concatenation

    char final_string[50];
    strncat(string,source,sizeof(string));
    printf("Conatenated String: %s\n",string);

    // String compare

    printf("%d",strcmp("aaron","aaron"));

    // String searching of a character using strchr()

    char sentence[]="The quick brown fox jumps over the lazy dog";
    // we'll need to use a pointer as the strchr() function returns an address

    char *index_of=NULL;
    index_of=strchr(sentence,'g');
    printf("%d\n",index_of);

    // String searching of a substring using the strstr() function

    char text[]="Every dog has its day";
    char word[]="dog has its day";

    char *substr=NULL;

    substr=strstr(text,word);

    printf("%d\n",substr);

    // Tokenizing a string

    char name[]="Hello how are you-my name is-aaron";
    const char dash[2]="-";
    char *token;

    token=strtok(name,dash);

    while(token!=NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL,dash);
    }

    return 0;
}