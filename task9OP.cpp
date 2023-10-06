#include <iostream>
using namespace std;
string timeTravel(int hours,int minutes);
main()
{	int hours,minutes;
	cout << "Enter Hours: ";
	cin >> hours;
	cout << "Enter Minutes: ";
	cin >> minutes;
	string result=timeTravel(hours,minutes);
	cout << result;
}
string timeTravel(int hours,int minutes)
{	
	string result;
	hours=hours%24;
	minutes=minutes%60;
	int totaltime=hours*60+minutes+15;
	int h=totaltime/60;
	int m=totaltime%60;
	result=to_string(h)+":"+to_string(m);
	return result;
}	