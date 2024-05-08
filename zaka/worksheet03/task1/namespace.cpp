#include <iostream>
#include "getPuts.h"


using namespace std;

int main()
{
	char str[] = "Hello World";
	int written;
	
	written = getPuts::puts(str);
	
	cout << written << endl;

	return 0;
}

