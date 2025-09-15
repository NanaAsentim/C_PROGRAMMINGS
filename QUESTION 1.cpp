#include <stdio.h>
#include <stdlib.h>
/*a) Declares appropriate variables to store body temperature (°C), heart rate (bpm), and
blood pressure (mmHg) readings.
b) Prompts the user to input the values.
c) Displays the values with clear labels.
Hint: Use float for temperature and int for others.
*/
int main()
{
  float bodytemp; //declare variable for body temperature in degree celcius.
  int heartrate; //declare variable for heart rate (bpm).
  int bloodpress; //declare variable for blood pressure (mmHg).

  printf("enter body temperature:"); //prompt user to enter value.
  scanf("%f",&bodytemp);// user enters value.
  printf("Body temperature =%fdegree celcius\n",bodytemp);//results displayed.

  printf("enter heart rate value:"); //prompt user to enter value.
  scanf("%d",&heartrate); //user enters value.
  printf("Heart rate =%d(bpm)\n",heartrate); //results displayed.

  printf("enter blood pressure:");//prompt user to enter value.
  scanf("%d",&bloodpress);//user enters value.
  printf("The blood pressure =%d(mmHg)\n",bloodpress);//result displayed.

    return 0;
}
