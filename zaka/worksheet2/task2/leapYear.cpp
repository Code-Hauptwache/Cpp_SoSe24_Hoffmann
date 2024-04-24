#include <iostream>

using namespace std;

bool checkForLeapYear(const int year);

int main()
{
	int year;
	bool result;
	
	while (1)
	{
		cin >> year;
		if (year == 0)
			break;
		
		result = checkForLeapYear(year);		
		
		if (result == true)
			cout << year << " ist ein Schaltjahr!" << endl;
		else
			cout << year << " ist kein Schaltjahr!" << endl;
	}
	
	return 0;
}

bool checkForLeapYear(const int y)
{
	return (y % 4 == 0 && y % 100 !=0) || (y % 400 == 0);
}
