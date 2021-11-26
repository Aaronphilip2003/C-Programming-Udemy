#include<stdio.h>
int main()
{
    int minutes=0;
    printf("Enter the number of minutes:\n");
    scanf("%d",&minutes);

    double minutesInYear=60*24*365;
    double years=0;
    years=(minutes/minutesInYear);
    double days=0;
    days=(minutes/60.0)/24.0;
    printf("The number of years:%lf\n",years);
    printf("The number of days:%lf\n",days);
    return 0;
}