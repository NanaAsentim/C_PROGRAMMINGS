#include <stdio.h>
#include <stdlib.h>
//Mini Project 3: Voting Eligibility Checker
/*Ask the user to enter their age and citizenship status (Y for Yes, N for No). Use nested
if statements to determine if the person is eligible to vote (age ≥ 18 and must be a
citizen).*/

int main()
{
   int age;
   char citizen;

   printf("enter age :");
   scanf("%d",&age);
   printf("are you a citizen...Enter Y if yes or N if no:");
   scanf(" %c",&citizen);

   switch(citizen)
   {
   case'Y':
    if (age >= 18)
    printf("You are eligible to vote\n");
    break;
   case'N':
    if (age >= 18)
        printf("Not legible to vote...REASON(YOU ARE NOT A CITIZEN)\n");
    break;

   }


    return 0;
}

