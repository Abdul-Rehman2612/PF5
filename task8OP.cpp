#include <iostream>
using namespace std;
string odd_evenish(int number);
main()
{	int number;
	cout << "Enter a five-digit number: ";
	cin >> number;
	string result=odd_evenish(number);
	cout << result;
}
string odd_evenish(int number)
{	
	string result;
	int a=number%10;
	int b=number/10;
	int c=b%10;
	int d=b/10;
	int e=d%10;
	int f=d/10;
	int g=f%10;
	int h=f/10;
	int sum=a+c+e+g+h;
	if(sum%2!=0)
	{
	return result="Oddish" ;
	}
	if(sum%2==0)
	{
	return result="Evenish" ;
	}
}	