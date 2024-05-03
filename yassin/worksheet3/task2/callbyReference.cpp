#include <iostream>
using namespace std;
void Double(int& eingangW);

int main ()
{
	int wert;
	
	cout << "Geben Sie eine Zahl ein um sie mal 2 auszumultiplizieren:" << endl;
	cin >> wert;
	
	Double(wert);

	cout << "das ergebnis ist " << wert << endl;
}

void Double(int& eingangW)
{
	eingangW = eingangW * 2;
}
