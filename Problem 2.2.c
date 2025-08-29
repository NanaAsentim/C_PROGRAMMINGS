#include <stdio.h>
#include <stdlib.h>
/*If a five-digit number is input through the keyboard, write a program to
reverse the number. */
int main()
{
    int digit1 , digit3 , digit2 , digit4, digit5, reverse , rem;

    printf("Enter five digits:");
    scanf("%d",&rem);

    digit5 = rem % 10;
    rem = rem / 10;

    digit4 = rem % 10;
    rem = rem /10;

    digit3 = rem % 10;
    rem = rem /10;

    digit2 = rem % 10;
    rem = rem /10;

    digit1 = rem % 10;

    reverse = digit5 * 10000 + digit4 * 1000 + digit3 * 100 + digit2 * 10 + digit1 ;

    printf("%d",reverse);
    return 0;
}
