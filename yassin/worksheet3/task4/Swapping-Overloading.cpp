#include <iostream>
using namespace std;

namespace MySwap 
{
    bool swap(int& num, int& num2) {
        if (num > 0 && num2 > 0) {
            int temp = num;
            num = num2;
            num2 = temp;
            return true;
        }
        return false;
    }

	bool swap(double& num,double& num2)
	{
		double temp = num;
        num = num2;
        num2 = temp;
        return true;
	}
}

int main() {
    int zahl1, zahl2;
    double zahl3, zahl4;
    
    do {
        cout << "Geben Sie 2 positive Zahlen ein: " << endl;
        cin >> zahl1 >> zahl2;
    } while (zahl1 < 0 || zahl2 < 0);
    
    cout << "Eingangswerte: " << zahl1 << " " << zahl2 << endl;
    
    if (MySwap::swap(zahl1, zahl2)) {
        cout << "ausgangswerte: " << zahl1 << " " << zahl2 << endl;
    } 
    else 
    {
        cout << "mindestens eine der eingegebenen Zahlen ist nicht positiv." << endl;
	}
	  
	cout << "\nGeben Sie 2 Gleitkommazahlen ein: " << endl;
    cin >> zahl3 >> zahl4;
    
    cout << "Eingangswerte Gleitkommazahlen: " << zahl3 << " " << zahl4 << endl;
    
    if (MySwap::swap(zahl3, zahl4)) 
    {
        cout << "Ausgangswerte Gleitkommazahlen: " << zahl3 << " " << zahl4 << endl;
    } else {
        cout << "Fehler beim Tauschen von Gleitkommazahlen." << endl;
    }

    return 0;
}
bool swap(double& num,double& num2)
{
	 if (num > 0 && num2 > 0) 
	{
		float temp = num;
		num = num2;
        num2 = temp;
		return true;
    }
    return false;
}
