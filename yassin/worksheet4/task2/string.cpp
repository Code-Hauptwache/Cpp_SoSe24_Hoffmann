#include <string>
#include <iostream>
#include <cassert>

using namespace std;


int todec(string s, int i) 
{
    assert(i >= 0 && i < s.length());
    char c = s[i];
    if (c >= '0' && c <= '9') 
    {
        return c - '0';
    } 
    else if (c >= 'a' && c <= 'f') 
    {
        return 10 + (c - 'a');
    } 
	else if (c >= 'A' && c <= 'F') 
	{
        return 10 + (c - 'A');
    } 
	else 
	{
        assert(false);
    }
    return -1; 
}

int hex2dec(string s) 
{
    int result = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        result = result * 16 + todec(s, i);
    }
    return result;
}

int main() 
{
    string s;
    cout << "Geben Sie eine hexadezimale Zahl ein: ";
    cin >> s;

    int decimalValue = hex2dec(s);
    cout << s << " in dezimal ist: " << decimalValue << endl;

    return 0;
}


