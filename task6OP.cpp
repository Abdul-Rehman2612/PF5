#include <iostream>
using namespace std;
string checkAlphabetCase(char character);
main()
{	char character;
	cout << "Enter a character (A/a): ";
	cin >> character;
	checkAlphabetCase(character);
}
string checkAlphabetCase(char character)
{	
	string line;
	if(character=='A')
	{
	line="You have entered Capital A";
	}
	if(character=='a')
	{
	line="You have entered small a";
	} 
	cout << line;
}	