#include <stdio.h>
#include <stdlib.h>
/*Use a switch statement to simulate a traffic light system*/
int main()
{
  char Light;
  int R,Y,G;

  printf("Enter colour displayed( ie R, Y or G):");
  scanf(" %c",&Light);

  switch(Light)
  {
       case'R':
      printf("STOP\n");
      break;
  case'Y':
    printf("Yellow,Get Ready\n");
    break;
  case'G':
    printf("Green,Go\n");
    break;

  }

  return 0;
}
