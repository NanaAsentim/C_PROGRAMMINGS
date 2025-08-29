#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*If lengths of three sides of a triangle are input through the keyboard,
write a program to find the area of the triangle.*/
int main()
{
    float side_a , side_b , side_c , S , Area;

    printf("Enter side a , side b, and side c...(in cm):");
    scanf("%f,%f,%f",&side_a,&side_b,&side_c);

    S = (side_a + side_b + side_c) / 2;
    Area = S * sqrt(S - side_a) * (S - side_b) * (S - side_c);
    printf("The area of the triangle =%f\ncm square",Area);



    return 0;
}
