/*
 * fileopen.cxx
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <fstream>
#include <stdio.h>

int main(int argc, char **argv)
{
  FILE* fd;
	std::string fn = "output.txt";
  
  fd = fopen(fn.c_str(),"r");

  if (!fd) { perror("File opening failed"); return 1; }
 
  int c; // Note: int, not char, required to handle EOF
  
  std::string Out;
  while ((c = fgetc(fd)) != EOF) // Standard C I/O file reading loop
   Out += c;
  
  std::fclose(fd);
  std::cout << "Gelesen: " << Out << std::endl;
  
  std::ofstream Outfile(fn.c_str(),std::ios::app);
  Outfile << "Neue Zeile" << "\n";
  
  return 0;
}

