#include <iostream>
#include <cmath>
using namespace std;
float treeheight(float distance_base,float angleof_elevation);
main()
{
	float distance_base,angleof_elevation;
	cout << "Enter the distance from the base of the tree (in feet): ";
	cin >> distance_base ;
	cout << "Enter the angle of elevation (in degrees): ";
	cin >> angleof_elevation;
	float height = treeheight(distance_base,angleof_elevation);
	cout << "The height of the tree is: "<< height << " feet";
}
float treeheight(float distance_base,float angleof_elevation)
{	
	float result=distance_base*tan(angleof_elevation*(1/57.2958));
	return result;	

}
