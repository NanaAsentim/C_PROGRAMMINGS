#include <stdio.h>
#include <stdlib.h>
/*Mini Project 1: Grading System*/
int main()
{
    int marks;
    char grade;

    printf("Enter marks:");
    scanf("%d",&marks);

    if( marks >= 90 && marks <= 100)
        printf("Grade of student is A\n");

    else if ( marks >= 80 && marks <= 89 )
        printf("Grade of student is B\n");

    else if ( marks >= 70 && marks <= 79)
        printf("Grade of student is C\n");

    else if ( marks >= 50 && marks <= 69)
    printf("The grade of student is D\n");

    else if (marks > 0 && marks <= 50)
        printf("The grade of student is F\n");

    else if (( marks < 0 ) || ( marks > 100))
        printf("Invalid marks input\n");

        return 0;
}
