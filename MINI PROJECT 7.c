#include <stdio.h>
#include <stdlib.h>
/*Mini Project 7: Library Book Category Checker
Description:
Let the user enter the first letter of a book category:
● F: Fiction
● N: Non-Fiction
● S: Science
● H: History
Display the full category name using a switch.*/
int main()
{
    char F,N,S,H;
    char category;
    printf("\n=====LIBRARY BOOK CATEGORY CHECKER=====\n");
    printf("\nF: Fiction\n");
    printf("N: Non-Fiction\n");
    printf("S: Science\n");
    printf("H: History\n");
    printf("\n>>>> Choose a category by entering the first letter <<<< \n");
    scanf(" %c",&category);

    switch(category)
    {
    case'F':
        printf("The full category name is Fiction\n");
        break;
    case'N':
        printf(" The full category name is Non-Fiction\n");
        break;
    case'S':
        printf(" The full category name is Science\n");
        break;
    case'H':
        printf(" The full category name is History\n");
        break;
    default:
        printf("-----invalid option...try again-----");
    }
    return 0;
}
