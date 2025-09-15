#include <stdio.h>
#include <stdlib.h>
/* a) Prompts the user to enter 4 systolic BP readings (in mmHg).
b) Calculates and displays the total and the average.
Use variables and for loops only; do not use arrays*/
int main()
{
   int sys1,sys2,sys3,sys4;// declare variable for four(4) systolic BP readings (in mmHg)
   int total,count ;// declare variable for the total systolic readings and count
   float average;//declare variable for the average of the systolic readings
   for(count = 1 ; count <= 1 ; count = count + 1)
   {
       printf("enter 4 systolic BP readings :");// Prompt user to enter 4 systolic BP readings
       scanf("%d%d%d%d;",&sys1 , &sys2, &sys3,&sys4);// user enters 
       total = sys1 + sys2 + sys3 + sys4;//declare formula for total
       printf("The total value of your systolic BP readings is %dmmHg\n",total); //display results
       average = total / 4;// declare formula for average
       printf("The average value of your systolic BP readings is %fmmHg\n",average) ;//display results
   }
    return 0;
}
