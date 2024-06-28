/*
 * iout.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
	float  pi = 3.141516;
  ofstream* out = new ofstream("output.txt");

  *out << "Schreiben in die Datei 'output.txt': \n"
       << setw(12) << setprecision(2) << fixed << pi << endl;
     
  delete out;
	
  return 0;
}

