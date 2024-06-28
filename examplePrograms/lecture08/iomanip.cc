/*
 * iomanip.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
    int x = 4711;
    
    cout  <<  setw(15) << left << "dezimal: "
          <<  setw(10) << right << dec << x << "\n"
          <<  setw(15) << left << "hexadezimal: "
          <<  setw(10) << right << hex << x << "\n"
          <<  setw(15) << left << "octal: "
          <<  setw(10) << right << oct << x << endl;
  
	return 0;
}

