#include<stdio.h>
int main()
{
    double hours=0;
    printf("Enter the number of hours worked:");
    scanf("%lf",&hours);
    double amount=0;
    double finalAmount=0;
    if(hours<=40)
    {
        amount=12*hours;
    }
    else if(hours>40)
    {
        amount=(12*40)+(hours-40)*18;
    }
    if (amount<=300)
    {
        finalAmount=amount;
    }
    else if(amount>300 && amount<=450)
    {
        finalAmount=amount-(0.15*300+0.2*(amount-300));
    }
    else if (amount>450)
    {
        finalAmount=amount-(0.15*300+0.2*150+(amount-450)*0.25);
    }
    printf("Final Amount payable after taxes:%lf",finalAmount);
    return 0;
}