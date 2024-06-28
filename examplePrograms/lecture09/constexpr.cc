/*
 * constexpr.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */

#include <iostream>

long long Fak0(int n)
{
  long long fak{1uL};
  while (n > 1)
    fak *= n--;
  
  return fak;
}

constexpr long long Fak1(int n)
{
  long long fak{1uL};
  while (n > 1)
    fak *= n--;
  
  return fak;
}

int input()
{
  return 5;
}

int main(int argc, char **argv)
{
	const long long ergebnis0{Fak0(3)};
  std::cout << "Fakultaet 3: " << ergebnis0 << std::endl;
  
  int num{4u};
  long long ergebnis1{Fak1(num)};
  std::cout << "Fakultaet 4: " << ergebnis1 << std::endl;
  
  const int zahl5(input());
  long long ergebnis2{Fak1(zahl5)};
  std::cout << "Fakultaet 5: " << ergebnis2 << std::endl;
  
  const int zahl6{6};
  long long ergebnis3{Fak1(zahl6)};
  std::cout << "Fakultaet 6: " << ergebnis3 << std::endl;
  
  constexpr long long ergebnis4{Fak1(7)};
  std::cout << "Fakultaet 7: " << ergebnis4 << std::endl;
  
	return 0;
}

