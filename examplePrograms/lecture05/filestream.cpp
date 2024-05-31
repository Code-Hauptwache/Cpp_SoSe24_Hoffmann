/*
 * filestream.cpp
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <fstream>
#include <iostream>
#include <string>

int main()
{
  {
    std::string fn("filename.txt");
    std::ofstream Outfile(fn);
    Outfile << "Hello, World!" << std::endl;
  } // file gets flushed and closed here

  std::ifstream Infile(fn);
  std::string Line;
  std::getline(Infile,Line);
  std::cout << Line << std::endl;
  return 0;
}
