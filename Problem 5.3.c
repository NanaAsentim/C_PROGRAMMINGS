#include <stdio.h>
#include <stdlib.h>
/*Two numbers are entered through the keyboard. Write a program to
find the value of one number raised to the power of another. */
int main()
{
   int num1, num2, power,a;
   power = a = 1;
   printf("enter first and second number:");
   scanf("%d%d",&num1,&num2);
   while( a <= num2)
   {
       power = power * num1;
       a++;
   }
   printf("The answer for %d raised to the power %d = %d\n",num1,num2,power);
   return 0;
}
