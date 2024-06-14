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
    Person( const char* n="", Date bday = {1,1,1970} ) : name(n), birth(bday) { };
    void PrintName() { std::cout << name <<std::endl; }
    void PrintBirth() { std::cout << birth.day << "." << birth.month << "." << birth.year << std::endl; } 
  private:
    std::string name; 
    Date birth;
};

class Student : public Person
{
  public:
    Student(const char* n, const char* id="", const char* hs="") 
     : Person(n), Matrikel(id), Hochschule(hs) { };
    void SetDate(int d, int m, int y) { day = d; month = m; year = y; };
    void GetStudent() 
     { PrintName(), std::cout << " Matrikelnummer: " << Matrikel << " Hochschule: " << Hochschule << std::endl; }
  private:    
    std::string Matrikel;
    std::string Hochschule;
    int ects;
};

int main(int argc, char **argv)
{
	
  Person Erwin("Erwin Hoffmann", {17,6,1989}, "1234", "FR-UAS" );
  Erwin.PrintName();
  Erwin.PrintBirth();
  Erwin.GetStudent();
  
	return 0;
}

