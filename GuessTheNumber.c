#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
    int tries=5;
    int number=0;
    time_t t;
    srand((unsigned) time(&t));
    number=rand()%21;
    while(tries>0)
    {
        int choice;
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==number)
        {
            printf("Correct Guess!\n");
            break;
        }
        else if(choice>number)
        printf("The Number is a little lower\n");
        else
        printf("The Number is a little higher\n");
        tries-=1;
    }
    printf("%d was the correct number",number);
    return 0;
}