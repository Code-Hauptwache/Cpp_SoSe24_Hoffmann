#include <iostream>
#include "putsFunction.h"

using namespace std;
	
int main()
{
	const char *message = "Hello World!";
	int anzahlBytes;
	
	anzahlBytes = putsF::puts(message);
	
	cout << "\nAnzahl an bytes:" << anzahlBytes << endl;
	
	return 0;
}
