#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

char tohex(int i);
string hexadecimal(int n);

int main()
{
	int decNum;
	
	cout << "Enter a decimal to convert in hexadecimal: ";
	cin >> decNum;
	
	cout << decNum << " in hexadecimal is: " << hexadecimal(decNum) << endl;
	
	return 0;
}

char tohex(int i)
{
	assert(i < 16);
	
	if (i < 10)
		return '0' + i;
	else
		return 'a' + (i - 10);
}

string hexadecimal(int n)
{
	string hexResult = "";
	
	if (n == 0)
		return hexResult += '0';
	
	while (n > 0)
	{
		int remainder = n % 16;
	
		hexResult += tohex(remainder);
		
		n /= 16;
	}
	
	hexResult += "x0";
	
	reverse(hexResult.begin(), hexResult.end());
	
	
	return hexResult;
}
