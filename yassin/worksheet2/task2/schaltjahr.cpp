#include <iostream>

using namespace std;

bool testObSchaltjahr(int y);

int main()
{
	int y;
	bool result;


	
	while (1)
	{
		cin >> y;
		if (y == 0)
			break;
			
		result = testObSchaltjahr(y);
		
		if(result == true)
		{
			cout << y << " ist ein Schaltjahr!" << endl;	
		}
		else
		{
			cout << y << " ist kein Schaltjahr!" << endl;
		}	
	}
	
	return 0;
}

bool testObSchaltjahr(int y)
{
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return true;
	else
		return false;
		
}
