/*
 * const_cast.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

int main(int argc, char **argv)
{ 
   const int a = 20;
   const int* b = &a;
   std::cout << "Eingangswert: " << *b << "\n";
   int* c = const_cast<int *>(b);
   *c = 40;
   std::cout << "Neuer Wert: " << *b << std::endl;

  return 0;
}

