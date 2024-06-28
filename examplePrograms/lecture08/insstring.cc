/*
 * insstring.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void print(string& s, int n, float x, istringstream& in)
{
  cout << "s = \"" << s << "\", n = " << n << ", x = " << x
       << ", in.str() = \"" << in.str() << "\"" << endl;
}

int main(int argc, char **argv)
{
	string s;
  int n = 0;
  float x = 0.0;
  
  istringstream in("abcdef 42 3.14");
  print(s,n,x,in);
  
  in >> s;
  print(s,n,x,in);
  
  in >> n;
  print(s,n,x,in);
  
  in >> x;
  print(s,n,x,in);
  
	return 0;
}

