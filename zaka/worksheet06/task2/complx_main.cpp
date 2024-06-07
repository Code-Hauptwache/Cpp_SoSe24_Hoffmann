#include <iostream>
#include "complx.h"

using namespace std;
using namespace ToComplx;

int main(int argc, char **argv)
{
  Complx a {1.0, 1.0};
  Complx b {2.0, 3.0};
  
  Complx c = a - b;
  cout << c.real() << " + " << c.imag() << "i" << endl;      

  Complx d = a * b;
  cout << d.real() << " + " << d.imag() << "i" << endl;   
     
  return 0;
}

