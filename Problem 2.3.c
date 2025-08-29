#include <stdio.h>
#include <stdlib.h>
/*Consider a currency system in which there are notes of six
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a
sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs. N.*/

int main()
{
   int Rs1,Rs2,Rs5,Rs10,Rs50,Rs100,sum_Rs, small_num;
   printf("enter sum of Rs.N :");
   scanf("%d",&sum_Rs);

   Rs100 = sum_Rs / 100;
   Rs100 = Rs100 % 100;

   Rs50 = sum_Rs / 50;
   Rs50 = Rs50 % 50;

   Rs10 = sum_Rs / 10;
   Rs10 = Rs10 % 10;

   Rs5 = sum_Rs / 5;
   Rs5 = Rs5 % 5;

   Rs2 = sum_Rs / 2;
   Rs2 = Rs2 % 2;

   Rs1 = sum_Rs / 1;
   Rs1 = Rs1 % 1;

   small_num = Rs100 + Rs50 + Rs10 + Rs5 + Rs2 + Rs1;
   printf("Therefore,the smallest number of notes that will combine to give Rs. N =%d\n",small_num);


    return 0;
}
