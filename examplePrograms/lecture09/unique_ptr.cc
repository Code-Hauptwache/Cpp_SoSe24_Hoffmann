/*
 * auto_ptr.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */




// C++ program to illustrate the use of unique_ptr 
#include <iostream> 


using namespace std; 
  
class A { 
public: 
    void show() { cout << "A::show()" << endl; } 
}; 
  
int main() 
{ 
    unique_ptr<A> p1(new A); 
    p1->show(); 
  
    // returns the memory address of p1 
    cout << p1.get() << endl; 
  
    // transfers ownership to p2 
    unique_ptr<A> p2 = std::move(p1); 
    p2->show(); 
    cout << p1.get() << endl; 
    cout << p2.get() << endl; 
  
    // transfers ownership to p3 
    unique_ptr<A> p3 = std::move(p2); 
    p3->show(); 
    cout << p1.get() << endl; 
    cout << p2.get() << endl; 
    cout << p3.get() << endl; 
  
    return 0; 
}


