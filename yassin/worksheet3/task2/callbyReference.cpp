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
// können sie den INteger als "const"deklarieren?
// Ja, wenn der Integer als 'const' deklariert wird,
// kann er nicht durch die Funktion verändert werden. 
// In diesem Fall müsste die Funktion Double auch als const deklariert werden
// 2. Die Funktion musste angepasst werden um einen Pointer auf den Wert zu 
// akzeptieren . Die Funktionalität wäre ähnlich.
// 3. Referenzen ist elegante laut vorlesungs Hoffmann, weil es einfacher zu verstehen ist
