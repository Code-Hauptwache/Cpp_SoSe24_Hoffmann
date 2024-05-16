#include <algorithm>
#include <cassert>
#include <cmath>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int todec(string str, int i);
int hexToDec(string str);

int main()
{
	string hexNum;

	cout << "Enter a hex number to contert in to decimal: ";
	cin >> hexNum;

	cout << "0x" << hexNum << " in decimal is: " << hexToDec(hexNum) << endl;
	
	return 0;
}

int todec(char c)
{
	c = tolower(c);

	assert((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'));

	if (c >= '0' && c <= '9')
		return 0 + (c - '0');
	else
		return 10 + (c - 'a');
}

int hexToDec(string str)
{
	int hexInDec = 0;
	int strLen = str.length();

	for (int i = 0; i < strLen; i++)
	{
		hexInDec += todec(str[strLen - 1 - i]) * pow(16, i);
	} 

	return hexInDec;
}
