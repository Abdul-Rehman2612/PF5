#include <iostream>
using namespace std;
int symetriccheck(int number);
main()
{	int number;
	cout << "Enter a three-digit number: ";
	cin >> number;
	symetriccheck(number);
}
int symetriccheck(int number)
{	
	int a=number%10;
	int d=number/100;
	if(a==d)
	{
	cout << "The number is symmetrical." ;
	}
	if(a!=d)
	{
	cout << "The number is not symmetrical." ;
	}
}	