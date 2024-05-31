/*
 * complex_main.cpp
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
  Complx b {2.0, 3.0};
  
  Complx c = a - b;
  cout << c.getReal() << " + " << c.getImag() << "i" << endl;      

  Complx d = a * b;
  cout << d.getReal() << " + " << d.getImag() << "i" << endl;   
     
  return 0;
}

