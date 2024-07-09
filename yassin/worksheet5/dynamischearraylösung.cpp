#include <iostream>

// Funktion zum Erstellen und Befüllen des Arrays
void getarray(double*& array, int& n)
{
    std::cout << "Geben Sie die Größe des Arrays ein: ";
    std::cin >> n;

    // Dynamisches Array erstellen
    array = new double[n];

    // Array mit Werten befüllen
    std::cout << "Geben Sie " << n << " Werte für das Array ein:\n";
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> array[i];
    }
}

// Funktion zum Ausdrucken des Arrays
void printarray(double* array, int n) 
{
    std::cout << "Array-Inhalt:\n";
    for (int i = 0; i < n; ++i) 
    {
        std::cout << array[i] << "\n";
    }
}

int main() {
    double* arr = nullptr;  // Pointer auf das Array
    int n;                  // Größe des Arrays

    // Array erstellen und befüllen
    getarray(arr, n);

    // Array-Inhalt ausgeben
    printarray(arr, n);

    //  Array freigeben
    delete[] arr;

    return 0;
}

