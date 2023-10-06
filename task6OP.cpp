#include <iostream>
using namespace std;
string checkAlphabetCase(char character,string line);
main()
{	char character;
	string line;
	cout << "Enter a character (A/a): ";
	cin >> character;
	checkAlphabetCase(character,line);
	line=checkAlphabetCase(character,line);
	cout << line;
}
string checkAlphabetCase(char character,string line)
{	
	if(character=='A')
	{
	return line="You have entered Capital A";
	}
	if(character=='a')
	{
	return line="You have entered small a";
	} 
}	