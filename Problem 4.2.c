#include <stdio.h>
#include <stdlib.h>

int main()
{
  char a;
  printf("Enter a Character (ie.letters or numbers ):");
  scanf("%c",&a);

  if(a <=90 && a > 64)
    printf("%c is a capital letter\n",a);
  if(a <= 122 && a > 96)
    printf("%c is a small letter\n",a);

 if((a <= 57 && a > 47)||
     (a ==0 && a <= 47) ||
    (a == 58 && a <= 64) ||
    (a == 91 && a < 96) ||
    (a == 123 && a <= 127 ))
    printf("%c is a digital number OR a special number\n",a);
    return 0;
}
