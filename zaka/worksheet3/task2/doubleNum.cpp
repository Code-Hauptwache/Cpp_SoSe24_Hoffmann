#include <iostream>

using namespace std;

void doubleNumber(long& num);

int main()
{
	long number;
	
	cin >> number;
	
	doubleNumber(number);
	
	cout << number << endl;
	
	return 0;
}

void doubleNumber(long& num)
{
	num = num * 2;
}
