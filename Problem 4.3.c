#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side_a, side_b,side_c;
    int case_1,case_2,case_3,case_4;

    printf ("enter length of side a:");
    scanf("%d,",&side_a);

    printf("enter length of side b:");
    scanf("%d,",&side_b);

    printf ("enter length of side c:");
    scanf("%d,",&side_c);

    case_1 = side_a + side_b > side_c;
    case_2 = side_b + side_c > side_a;
    case_3 = side_c + side_a > side_b;
    case_4 = side_a == side_b == side_c;

    if(case_1 && case_2 && case_3 )
        printf(" The triangle is VALID!");
        else
        {
            if(case_4)
                printf("The triangle is INVALID!");
        }
        return 0;
}
