#include<stdio.h>
int main()
{
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum Company xerox=XEROX;
    enum Company facebook=FACEBOOK;
    enum Company google=GOOGLE;

    printf("The value of xerox is: %d\n",xerox);
    return 0;
}