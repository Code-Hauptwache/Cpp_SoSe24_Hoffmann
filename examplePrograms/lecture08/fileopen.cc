/*
 * fileopen.cxx
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
  FILE* fd;
	string fn = "output.txt";
  
  fd = fopen(fn.c_str(),"r");

  if (!fd) { perror("File opening failed"); return 1; }
 
  int c; // Note: int, not char, required to handle EOF
  
  string out;
  while ((c = fgetc(fd)) != EOF) // Standard C I/O file reading loop
   out += c;
  
  fclose(fd);
  cout << "Gelesen: " << out << endl;
  
  ofstream outfile(fn.c_str(),std::ios::app);
  outfile << "Neue Zeile" << "\n";
  
  return 0;
}

