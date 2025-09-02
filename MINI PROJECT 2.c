#include <stdio.h>
#include <stdlib.h>
//Mini Project 2: Basic Calculator Using switch
/*Prompt the user to enter two numbers and an operator (+, -, *, /). Use a switch case
to perform the correct operation*/
int main()
{
    int num1, num2,answer;
    char op; //operator

    printf("enter first number:");
    scanf("%d",&num1);

    printf("enter second number:");
    scanf("%d",&num2);

    printf("enter operation...(+, -, *, /):");
    scanf(" %c",&op);

    switch(op)
    {
    case'+':
        answer = num1 + num2;
        printf("Therefore the sum of the numbers is %d\n",answer);
        break;

    case'-':
        answer = num1 - num2;
        printf("Therefore the difference between the two numbers is %d\n",answer);
        break;

    case'*':
        answer = num1 * num2;
        printf("Therefore the product of the the numbers is %d\n",answer);
        break;

    case'/':
        answer = num1 / num2;
        printf("Therefore first number divided by a second number is %d",answer);
        break;
    }
    return 0;
}
