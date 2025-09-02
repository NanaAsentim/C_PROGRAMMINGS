#include <stdio.h>
#include <stdlib.h>
//Mini Project 4: Vending Machine Menu
/*Allow the user to select an item using a number. Use switch to show the price and
simulate the purchase*/
int main()
{
   int select,water,juice,soda,exit;
   char choice;
   printf("DRINK MENU\n");
   printf("1. WATER\n");
   printf("2. JUICE\n");
   printf("3. SODA\n");
   printf("4. EXIT\n");
   printf("select your choice from the menu:");
   scanf(" %c",&choice);

   switch(choice)
   {
   case'1':
    printf("The price of water 1 dollar\n");
    break;

   case'2':
    printf("The price of Juice is 2 dollars\n");
    break;

   case'3':
    printf("The price of soda is 3 dollars\n");
    break;

   case'4':
    printf("Thank you,enjoy your drink\n");
    break;
   }
    return 0;
}
