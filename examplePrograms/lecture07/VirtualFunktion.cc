/*
 * VirtualFunktion.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

class X
{
  public:
    virtual void put() { std::cout << "X::put() wird ausgefuehrt \n"; }
};

class Y : public X
{
  public:
   void put() override { std::cout << "Y::put() wird ausgefuehrt \n"; }
};


int main(int argc, char **argv)
{
  X x;
  Y y;
  
  X* x_ptr = &x;
  x_ptr -> put(); // Ruft put() von X auf 
  
  x_ptr = &y;
  x_ptr -> put(); // Ruft put() von X auf !!!
   
  return 0;
}

