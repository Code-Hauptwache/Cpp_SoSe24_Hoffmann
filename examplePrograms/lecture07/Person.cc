/*
 * Person.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
 
#include <iostream>
#include <string>
 
typedef struct date 
{
  int day;
  int month;
  int year;
} Date;

class Person
{
  public:
    Person(const char* n="", Date bday = {1,1,1970}) : name(n), birth(bday) { };
    void printName() { std::cout << name <<std::endl; }
    void printBirth() { std::cout << birth.day << "." << birth.month << "." << birth.year << std::endl; } 
  private:
    std::string name; 
    Date birth;
};

int main(int argc, char **argv)
{
	
  Person Erwin("Erwin Hoffmann", {17,6,1989} );
  Erwin.printName();
  Erwin.printBirth();
  
	return 0;
}

