#include <iostream>
#include <cmath>
using namespace std;
void quadratic_eq_discr(float a,float b,float c);
main()
{
	float a,b,c;
	cout << "Enter the value of a: ";
	cin >> a ;
	cout << "Enter the value of b: ";
	cin >> b ;
	cout << "Enter the value of c: ";
	cin >> c ;
	quadratic_eq_discr(a,b,c);
	
}
void quadratic_eq_discr(float a,float b,float c)
{
	float root1,root2,discriminant=b*b-4*a*c;
	if(discriminant==0)
	{
	root1=root2=-b/(2*a);
	cout << "Solution: x = " << root1;
	}
	if(discriminant>0)
	{
	root1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	root2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
	cout << "Solution: x = " << root1 << " and x = " << root2;
	}
	if(discriminant<0)
	{
	root1=(-b/(2*a));
	root2=((sqrt(-(b*b-4*a*c)))/(2*a));
	cout << "Complex Solutions: x = " << root1 << " + " << root2 << "i and x = " << root1 << " - " << root2 << "i" ;
	}
	
	
}