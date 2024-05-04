#include <iostream>
using namespace std;

namespace swap {
    // Template-Funktion swap, die zwei Werte eines beliebigen Typs vertauscht, wenn sie das gleiche Vorzeichen haben
    template <typename T>
    void swap(T &num1, T &num2, bool check_sign = true) {
        if (check_sign) {
            // Prüfen, ob beide Zahlen das gleiche Vorzeichen haben (funktioniert für alle numerischen Typen)
            if ((num1 >= 0 && num2 >= 0) || (num1 < 0 && num2 < 0)) {
                T temp = num1;
                num1 = num2;
                num2 = temp;
            }
        } else {
            // Tauschen ohne das Vorzeichen zu überprüfen
            T temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
}

int main() {
    // Für den generischen Datentyp können wir beispielsweise int verwenden
    float num1, num2;
    
    // Nutzereingaben für num1 und num2
    cout << "Bitte gebe zwei Zahlen ein: ";
    cin >> num1 >> num2;

    // Anzeigen der Anfangswerte
    cout << "Vor dem Tauschen:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Aufruf von swap mit Vorzeichenprüfung (Standardwert)
    swap::swap(num1, num2);
    cout << "Nach dem Tauschen mit Vorzeichenprüfung (Standardwert):" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Zurücksetzen der Werte und erneute Eingabe
    cout << "Bitte gebe erneut zwei Zahlen ein: ";
    cin >> num1 >> num2;

    // Aufruf von swap ohne Vorzeichenprüfung
    swap::swap(num1, num2, false);
    cout << "Nach dem Tauschen ohne Vorzeichenprüfung:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
