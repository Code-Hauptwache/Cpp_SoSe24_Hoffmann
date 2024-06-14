#include <iostream>

class Konto {
  public:
   //  Konto() { std::cout << "Objekt erstellt!" << std::endl; };
   //    Konto(unsigned int k, int s) { kontonummer = k; saldo = s; };  // Default Konstruktor
//   Konto(unsigned int kontonummer = 4711, int saldo = 0) { };  // Default Konstruktor
//   Konto(int betrag = 0) { };  // Default Konstruktor
   //       Konto(unsigned int kontonummer = 4711, int betrag, int saldo = 0) {kontonummer = 0; saldo = 0; };  // Default Konstruktor
   //  Konto() {kontonummer = 0; saldo = 0; };  // Default Konstruktor
   
     Konto() : kontonummer{0}, saldo{0} { std::cout << "Objekt erstellt!" << std::endl;  };
     Konto(unsigned int k, int s) : kontonummer{k}, saldo{s} { std::cout << "Objekt erstellt!" << std::endl; };
     Konto (const Konto&) { std::cout << "Copy Constructor " << std::endl; }
     bool abfragen(unsigned int, int&);
     bool einzahlen(unsigned int, int, int&);
     bool auszahlen(unsigned int, int, int&);
     bool eroeffnen(unsigned int);
     bool schliessen(unsigned int, int&);
private:
     unsigned int kontonummer;
     int saldo;
};

using namespace std;

Konto copy(Konto alt)
{
  Konto Kunde = alt;
  return Kunde;
}

int main()
{
  int a = 0;
  int& guthaben = a;
  int b = 0;
  int& saldo = b;
  
  unsigned int k = 4711;

//  Konto erwin;
  
//  Konto::erwin() { kontonummer = 4711; saldo = 0; }
   Konto erwin(4711,-5);
// erwin.eroeffnen(k);
  
  
  erwin.abfragen(k,saldo);
   
  cout << "Erwin Kontostand: " << saldo << " Euro" << endl;
  
  int i = 100;
  erwin.einzahlen(k,i,saldo);
  cout << "Erwin Kontostand: " << saldo << " Euro "<< endl;
  
  i = 50;
  erwin.auszahlen(k,i,saldo);
  cout << "Erwin Kontostand: " << saldo << " Euro "<< endl;
  
  Konto fred = erwin;
  
  fred.abfragen(k,saldo);
  
  cout << "Freds Kontostand: " << saldo << endl;
  
  copy(fred);
  
  cout << "Kunde's Kontostand: " << saldo << endl;
  
  
  return 0;
}
bool Konto::eroeffnen(unsigned int konum)
{
  kontonummer = konum;
//  saldo = 0;
  return true;
}
bool Konto::schliessen(unsigned int konum, int& kontostd)
{
  if (kontonummer != konum) return false;
  kontostd = saldo;
  return true;
}

bool Konto::abfragen(unsigned int konum, int& kontostd)
{
  if (kontonummer != konum) return false;
  kontostd = saldo;
  return true;
}

bool Konto::einzahlen(unsigned int konum, int geld, int& kontostd)
{
    if (kontonummer != konum) return false;
    saldo += geld; 
    kontostd = saldo;
    return true;
}

bool Konto::auszahlen(unsigned int konum, int geld, int& kontostd)
{
    if (kontonummer != konum) return false;
    if (geld > saldo) return false;
    saldo -= geld; 
    kontostd = saldo;
    return true;
}

