#include <stdio.h>
#include <stdlib.h>
/*Two numbers are entered through the keyboard. Write a program to
find the value of one number raised to the power of another */
int main()
{
  float x, power ;
 int y, i ;
 printf ( "\nEnter two numbers: " ) ;
 scanf ( "%f %d", &x, &y ) ;
 power = i = 1 ;
 while ( i <= y )
 {
 power = power * x ;
 i++ ;
 }
 printf ( "%f to the power %d is %f\n", x, y, power ) ;
    return 0;
}
