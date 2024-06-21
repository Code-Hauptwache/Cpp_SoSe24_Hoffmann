#include <iostream>
#include <cmath>

// Funktion zur Ausgabe des Arrays
void printarray(float** array, int n) {
    std::cout << "Array-Inhalt:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << *array[i] << "\n";
    }
}

// Funktion zum Sortieren des Arrays mit Bubblesort
void sort(float** f_ptr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (*f_ptr[j] > *f_ptr[j + 1]) {
                // Swap
                float* tmp = f_ptr[j];
                f_ptr[j] = f_ptr[j + 1];
                f_ptr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    // Array von Float-Pointern erstellen und initialisieren
    float* f_ptr[4];
    f_ptr[0] = new float(1.414213562); // sqrt(2)
    f_ptr[1] = new float(1.732050808); // sqrt(3)
    f_ptr[2] = new float(2.718281828); // e
    f_ptr[3] = new float(3.141592653); // pi

    int n = 4;

    // Ursprüngliches Array ausgeben
    std::cout << "Ursprüngliches Array:\n";
    printarray(f_ptr, n);

    // Array sortieren
    sort(f_ptr, n);

    // Sortiertes Array ausgeben
    std::cout << "\nSortiertes Array:\n";
    printarray(f_ptr, n);

    // Dynamisch zugewiesenen Speicher freigeben
    for (int i = 0; i < n; ++i) {
        delete f_ptr[i];
    }

    return 0;
}


