/*
 * unique_ptr2.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */


#include <iostream> 
#include <memory> 

 
struct X { 
    void printX() { std::cout << "X struct...." << std::endl; } 
}; 
  
int main() 
{ 
    std::unique_ptr<X> p1(new X); 
    p1->printX(); 
  
    // displays address of the containing pointer 
    std::cout << p1.get() << std::endl; 
    return 0; 
}
