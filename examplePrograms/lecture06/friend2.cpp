#include <iostream>

using namespace std;

class Fatca;

class Konto {
    friend Fatca& fatca(const Konto& name);
  public:
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

class Fatca {
  void fatca(const Konto& name) 
  {
    int betrag;
    // Konto::abfragen(name.kontonummer,name.betrag);
    // cout << "Saldo fuer Konto " << name.kontonummer << " :" << name.saldo << endl;
  }
};

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

  Konto erwin(4711,10);
  
  int i = 100;
  erwin.einzahlen(k,i,saldo);
  cout << "Erwin Kontostand: " << saldo << " Euro "<< endl;
  
  fatca(erwin);
  
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
