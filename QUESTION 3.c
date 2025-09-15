#include <stdio.h>
#include <stdlib.h>
/*a) Accepts a body temperature from the user.
b) Uses an if...else structure to classify it as:
○ Low (< 35°C)
○ Normal (35–37.5°C)
○ High (> 37.5°C)
c) Prints the category with a message.
Use conditional logic and formatted output.
*/
int main()
{
   float bodytem;// declare variable for body temperature.

   printf("Enter body temperature value:");// prompt user to enter body temperature value.
   scanf("%f",&bodytem); //user enters value

   if(bodytem <35)//if body temprature is less than 35,
   {
     printf("You have a low body temperature\n");// results displayed.
   }
       else
       if(bodytem >=35 && bodytem <=37.5 )// if body temmperature is between 55 and 37.5'
    {
      printf("You have a normal body temperaure\n");//results dispalayed.
    }

    else
        if(bodytem > 37.5)//if body temperature is greater than 37.5,
    {
      printf("You have a very high temperature\n ");//results displayed.
    }
   return 0;
}
