#include <iostream>
using namespace std;

namespace MySwap {
    bool swap(int& num, int& num2) {
        if (num > 0 && num2 > 0) {
            int temp = num;
            num = num2;
            num2 = temp;
            return true;
        }
        return false;
    }
}

int main() {
    int zahl1, zahl2;
    
    do {
        cout << "Geben Sie 2 positive Zahlen ein: " << endl;
        cin >> zahl1 >> zahl2;
    } while (zahl1 < 0 || zahl2 < 0);
    
    cout << "Eingangswerte: " << zahl1 << " " << zahl2 << endl;
    
    if (MySwap::swap(zahl1, zahl2)) {
        cout << "Ausgangswerte: " << zahl1 << " " << zahl2 << endl;
    } else {
        cout << "Mindestens eine der eingegebenen Zahlen ist nicht positiv." << endl;
    }

    return 0;
}

