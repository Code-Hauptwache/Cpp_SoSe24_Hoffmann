/*
 * complex_main2.cpp
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
#include <iostream>
#include "complx2.h"

using namespace std;
using namespace ToComplx;

Complx operator+(Complx a, Complx b) { return a += b; }
Complx operator-(Complx a, Complx b) { return a -= b; }
Complx operator*(Complx a, Complx b) { return a *= b; }

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

