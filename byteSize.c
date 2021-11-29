#include<stdio.h>
int main()
{
    printf("Size in Bytes if Integer: %zd\n",sizeof(int));
    printf("Size in Bytes if Character: %zd\n",sizeof(char));
    printf("Size in Bytes if Long: %zd\n",sizeof(long));
    printf("Size in Bytes if Long Long: %zd\n",sizeof(long long));
    printf("Size in Bytes if Double: %zd\n",sizeof(double));
    printf("Size in Bytes if Long Double: %zd\n",sizeof(long double));
    return 0;
}