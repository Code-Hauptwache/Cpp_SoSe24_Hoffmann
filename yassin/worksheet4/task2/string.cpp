#include <string>
#include <iostream>

using namespace std;

char tohex(int i)
{
	if( i > 0 && i < 10) return (char)i;
	if(i == 10) return 'a';
	if(i == 11) return 'b';
	if(i == 12) return 'c';
	if(i == 13) return 'd';
	if(i == 14) return 'e';
	if(i == 15) return 'f';
}

string hexadecimal(int n)
{
	int k, m;
	k = n/16
	m = n%16
}

int main(int argc, char **argv)
{
	int i;
		
	cout << "Geben sie eine Zahl ein: ";
	cin >> i;
		
	
}

