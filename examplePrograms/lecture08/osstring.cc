/*
 * osstring.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void print(ostringstream& out)
{
  cout << "oss.str() = \"" << out.str() << "\"" << endl;
}

int main(int argc, char **argv)
{
	string s = "abcdef";
  int n = 33;
  float x = 2.17;
  
  ostringstream out;
  
  print(out);
  
  out << s;
  print (out);
  out << " " << n;
  print (out);
  
  out << " " << x;
  print(out);
  
  
  
  
	return 0;
}

