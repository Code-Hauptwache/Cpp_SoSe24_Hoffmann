/*
 * virt_destructor.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

class B
{
  public:
    B() { p_ptr = new int[2]; std::cout << "B(). "; }
    ~B() { delete [] p_ptr; std::cout << "~B().\n"; }
  private:
    int* p_ptr;
};

class X : public B
{
  public:
    X() { q_ptr = new int[1023]; std::cout << "X(): X::q_ptr = " << q_ptr << ". "; }
    ~X() { delete [] q_ptr; std::cout << "~Y(): "; }
  private:
    int* q_ptr;
};

int main(int argc, char **argv)
{

  for (int i = 0; i < 8; i++) {
    B* r_ptr = new X;
    delete r_ptr;
  }

  return 0;
}

