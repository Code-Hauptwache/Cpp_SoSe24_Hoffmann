/*
 * auto_ptr.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */


// C++ program to demonstrate shared_ptr 
#include <iostream> 
#include <memory> 
  
class A { 
public: 
    void show() { std::cout << "A::show()" << std::endl; } 
}; 
  
int main() 
{ 
    std::shared_ptr<A> p1(new A); 
    std::cout << p1.get() << std::endl; 
    p1->show(); 
    std::shared_ptr<A> p2(p1); 
    p2->show(); 
    std::cout << p1.get() << std::endl; 
    std::cout << p2.get() << std::endl; 
  
    // Returns the number of shared_ptr objects 
    // referring to the same managed object. 
    std::cout << p1.use_count() << std::endl; 
    std::cout << p2.use_count() << std::endl; 
  
    // Relinquishes ownership of p1 on the object 
    // and pointer becomes NULL 
    p1.reset(); 
    std::cout << p1.get() << std::endl; 
    std::cout << p2.use_count() << std::endl; 
    std::cout << p2.get() << std::endl; 
  
    return 0; 
}



