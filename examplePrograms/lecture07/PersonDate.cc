/*
 * Person.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
 
#include <iostream>
#include <string>

class Date
{
  public:
    Date(int d=1, int m=1, int y=1970) : day(d), month(m), year(y) { };
    void SetDate(int d, int m, int y) { day = d; month = m; year = y; };
    void GetDate() { std::cout << day << "." << month << "." << year << std::endl; }
  private:    
    int day;
    int month;
    int year;
};


class Person
{
  public:
    Person( const char* n="" ) : name(n) { };
    void SetBirth( int d, int m, int y) { Birth.SetDate(d,m,y); }; // via Class Date
    
    void printName() { std::cout << name <<std::endl; }
    void printBirth() { Birth.GetDate(); } 
  private:
    std::string name; 
    Date Birth;
};

int main(int argc, char **argv)
{
	
  Person Erwin = (char *) 1;
  Person Erwin = "1";  // implizite Zuweisung
//  Person Erwin("Erwin Hoffmann");
  Erwin.SetBirth(1,1,1980);
  Erwin.printName();
  Erwin.printBirth();
  
  return 0;
}

