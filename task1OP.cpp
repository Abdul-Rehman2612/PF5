#include <iostream>
#include <cmath>
using namespace std;
main()
{
	float number1,number2;
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	if(number1<number2)
	cout << "The minimum of " << number1 << " and " << number2 << " is: " << number1;
	if(number1>number2)
	cout << "The minimum of " << number1 << " and " << number2 << " is: " << number2;
}
