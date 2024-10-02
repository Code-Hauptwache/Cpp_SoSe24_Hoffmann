#include <iostream>
#include "complx.h"

using namespace std;
using namespace ToComplx;

int main(int argc, char **argv)
{
    Complx a {1.0, 1.0};
    Complx b {2.0, 3.0};

    // Test addition
    Complx c = a + b;
    cout << "a + b: " << c.getReal() << " + " << c.getImag() << "i" << endl;

    // Test subtraction
    Complx d = a - b;
    cout << "a - b: " << d.getReal() << " + " << d.getImag() << "i" << endl;

    // Test multiplication
    Complx e = a * b;
    cout << "a * b: " << e.getReal() << " + " << e.getImag() << "i" << endl;

    // Test complex conjugation
    Complx f = ~a;
    cout << "conjugate of a: " << f.getReal() << " + " << f.getImag() << "i" << endl;

    // Test magnitude
    double magA = a.magnitude();
    cout << "magnitude of a: " << magA << endl;

    double magB = b.magnitude();
    cout << "magnitude of b: " << magB << endl;

    return 0;
}
