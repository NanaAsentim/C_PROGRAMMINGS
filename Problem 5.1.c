#include <stdio.h>
#include <stdlib.h>
/*Write a program to calculate overtime pay of 10 employees. Overtime is
paid at the rate of Rs. 120.00 per hour for every hour worked above 40
hours. Assume that employees do not work for fractional part of an
hour.*/
int main()
{
    float Over_tp;
    int hours;
    int a = 1;
    while( a <= 10)
    {
        printf("\nEnter the number of hours hours worked:");
        scanf("%d",&hours);
        Over_tp = (hours - 40) * 120;
        if(hours > 40)
            printf("Your over time pay  is %fcedis\n",Over_tp);
        else
            printf("Your hours worked are less than 40.(over time pay = ---)\n");
        a++;
    }
    return 0;
}

