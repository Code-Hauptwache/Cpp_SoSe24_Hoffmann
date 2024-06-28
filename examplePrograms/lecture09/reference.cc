/*
 * reference.cxx
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

int main(int argc, char **argv)
{
  int lvalue = 1;                       // Rvalue = 1; lvalue ist Lvalue 
  int& rlvalue = lvalue;                // rlvalue is Alias von lvalue
//  int&& rrlvalue1 = lvalue;             // Referenz auf lvalue; nein
  
  int&& rrlvalue2 = lvalue + 13;        // lvalue + 13 ist Rvalue; ok
  int&& rrlvalue3 = 999;                // 999 ist Rvalue :q
  
//  int& resultat = lvalue + 13;          // lvalue+13 ist Rvalue; nein
  const int& result = lvalue + 13;      // 
  
  return 0;
}

