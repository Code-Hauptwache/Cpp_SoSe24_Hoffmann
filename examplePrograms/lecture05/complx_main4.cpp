/*
 * complex_main4.cpp
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
  
  Complx a {1.0, 1.0};
  const Complx b {2.0, 3.0};
  
  a = b;
  cout << a.real() << " + " << a.imag() << "i" << endl;   

  Complx d = b;
  cout << d.real() << " + " << d.imag() << "i" << endl;   
     
  return 0;
}

