#include <iostream>

using namespace std;

int puts(const char *in);

int main()
{
	const char *message = "Hello World!";
	int anzahlBytes;
	
	anzahlBytes = puts(message);
	
	cout << "\nAnzahl an bytes:" << anzahlBytes << endl;
	
	return 0;
}

int puts(const char *in)
{
		
		int out = 0;
		while(*in != '\0'){
		cout.put(*in);
		++in;
		++out;
	}
	return out;
}
