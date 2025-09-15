#include <stdio.h>
#include <stdlib.h>


/*Design a basic ATM with the following options:
1. Check Balance
2. Deposit
3. Withdraw
4. Exit*/
int main()
{
   char money;
   float balance = 3000;
   float bala2, amount,amount2;
   int pin;
    int phoneNum;
 printf("1.Check Balance\n");
   printf("2.Deposit\n");
   printf("3.Withdraw\n");
   printf("4.Exit\n");
   printf("Select an option:");
   scanf(" %c",&money);

   switch(money)
   {
   case'1':

    printf("Enter pin:");
    scanf(" %d",&pin);
    if (pin != 1977)
        printf("Invalid pin.\n");
    else
    printf("your balance is %fdollars\n",balance);
    break;

   case'2':
       printf("Deposit amount:\n");
       scanf("%f",&amount);
       printf("enter phone number:\n");
       scanf("%d",&phoneNum);
       bala2 = amount + balance;
       printf("You deposited %fdollars into you account(%d). Your New balance is %fdollars",amount,phoneNum,bala2);
       break;
   case'3':
    printf("amount:\n");
    scanf("%f",&amount2);
    printf("enter pin to confirm:");
    scanf("%d",pin);
    if (pin != 1977)
        printf("iInvalid pin!!");
    else
    {
        bala2 = balance - amount2;
    if (amount2 > balance)
        printf("Your balance is insufficient to proceed with this request.\n");
    else
        printf("Withdrawal successful.\n Your current balance is %fdollars\n ",bala2);
        break;
    }
   case'4':
    printf("transaction stopped...");
    break;

   }
    return 0;
}

