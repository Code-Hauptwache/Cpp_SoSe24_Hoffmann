/*
 * complex_class.cpp
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <iomanip>

using namespace std;

class Complx {
  private:
    float re;
    float im;
  public:
    Complx(float r, float i) : re{r}, im{i} { }; // Konstruktor
    Complx(float r) : re{r}, im{0.0} { };       // Konstruktor mit im=0
    Complx() : re{0.0}, im{0.0} { };           // Konstruktor re=im=0
    ~Complx() {};                              // Destruktor

    Complx& operator+(Complx z) { re+=z.re, im+=z.im; return *this; }
    Complx& operator-(Complx z) { re-=z.re; im-=z.im; return *this; }
    Complx& operator*(Complx z) { re=re*z.re - im*z.im; im=re*z.im + im*z.re; return *this; }
 
    ostream& write(ostream& str) { return str << setprecision(2) << fixed << re << " + " << im << "i"; }
    istream& read(istream& str) { return str >> re >> im; }
};

ostream& operator<<(ostream& str, Complx& z)    // Ueberladung << 
{
  return z.write(str);                          // Ausgabe
}
istream& operator>>(istream& str, Complx& z)    // Ueberladung >>
{
  return z.read(str);                           // Einlesen: a b       
}

int main(int argc, char **argv)
{
  Complx a; 
  Complx b; 

  cout << "Gib 2 komplexe Zahlen ein: ";
  cin >> a >> b;

  cout << "Die Summe ist: " << a + b << endl;
  cout << "Die Differenz ist: " <<  a - b << endl; // !!!
  cout << "Das Produkt ist: " <<  a * b << endl;   // !!!
	return 0;
}

