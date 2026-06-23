#include <iostream>

using namespace std;
/*Write a C++ program that takes in two integer values from the user and calculates the
sum, difference, product, and quotient using the appropriate operators*/

int main()
{

int num1,num2;
int sum, difference, product,quotient;


    cout << "Enter the First Integer:";
cin >> num1;

cout << "Enter the Second Integer:";
cin >> num2;

sum = num1 + num2;
difference = num2 - num1;
product = num1 * num2;
quotient = num1 / num2;

cout << " The sum of " << num1 << " and " << num2 << " = "<< sum << endl;
cout << " The difference of " << num2 << " and " << num1 << " = "<< difference << endl;
cout << " The product of " << num1 << " and " << num2 << " = "<< product << endl;
cout << " The quotient of " << num1 << " and " << num2 << " = "<< quotient << endl;
    return 0;
}
