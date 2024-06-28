/*
 * narrowing.cpp
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int u = 42;
  
  void *ptr = &u;
  char *z = static_cast<char*>(ptr);
	
  cout << *z << endl;
  
  return 0;
}

