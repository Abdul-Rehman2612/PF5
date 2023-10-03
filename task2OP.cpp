#include <iostream>
#include <cmath>
using namespace std;
main()
{
	double number1,number2;
	cout << "Enter the base number: ";
	cin >> number1;
	cout << "Enter the exponent: ";
	cin >> number2;
	double result=pow(number1,number2);
	cout << number1 << " raised to the power " << number2 << " is: " << result;
}
