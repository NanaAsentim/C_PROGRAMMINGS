#include <stdio.h>
#include <stdlib.h>
/* If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or
incurred loss. Also determine how much profit he made or loss he
incurred.*/
int main()
{
    float cost_price , selling_price , profit ,loss;

     profit = selling_price - cost_price;
    loss = cost_price - selling_price;

    printf("Enter selling price of items:");
    scanf("%f",&selling_price);

    printf("Enter cost price of item:");
    scanf("%f",&cost_price);

    if(profit > 0)
    printf("seller has made profit:%f\n",profit);

    if(loss < 0)
    printf("seller incurred loss of %f\n",loss);






    return 0;
}
