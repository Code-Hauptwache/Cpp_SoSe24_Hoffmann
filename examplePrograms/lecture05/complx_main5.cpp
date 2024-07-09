/*
 * complex_main5.cpp
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
#include <iostream>
#include "complx.h"

using namespace std;
using namespace ToComplx;

int main(int argc, char **argv)
{
  Complx a {1.0, 1.0};  // list initialization

  Complx b(a);          // direct initialization
  cout << b.real() << " + " << b.imag() << "i" << endl;   

  double c = 2.1;       // copy initialization
  Complx d(c);  
  cout << d.real() << " + " << d.imag() << "i" << endl;   

  Complx e = 3.3;  
  cout << e.real() << " + " << e.imag() << "i" << endl;   

  Complx f(2.4, 3.0);   // direct initialization
  cout << f.real() << " + " << f.imag() << "i" << endl;   

  Complx g;             // default initialization
  g = Complx(5.7, 6.6);   // copy assignment
  cout << g.real() << " + " << g.imag() << "i" << endl;   

  Complx h;
  h.real(7.05);
  h.imag(8.);
  cout << h.real() << " + " << h.imag() << "i" << endl;   

  Complx i = Complx(5.0);
  cout << i.real() << " + " << i.imag() << "i" << endl;   

  auto j = Complx(5.0);
//  auto&& j = Complx(5.0);
  cout << j.real() << " + " << j.imag() << "i" << endl;   
     
  return 0;
}

