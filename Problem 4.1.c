#include <stdio.h>
#include <stdlib.h>
/*A year is entered through the keyboard, write a program to determine
whether the year is leap or not. Use the logical operators && and ||*/
int main()
{
   int year;
   printf("Enter year:");
   scanf("%d",&year);

   if(year % 400 == 0||year % 4 == 0 && year % 100 != 0)
    printf("%d is a leap year\n",year);

    else
    printf("%d is not a leap year\n",year);
    return 0;
}
