/*
 * Person.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
 
#include <iostream>
#include <string>
#include "PersonX.h"


class Student : public Person
{
  public:
    Student(const char* n, const char* id="", const char* hs="") 
     : Person(n), Matrikel(id), Hochschule(hs) { };
    void SetInscribe(int d, int m, int y) { inscribe.SetDate(d,m,y); }; // day, month, year: private
    void GetStudent() 
     { PrintName(), std::cout << " Matrikelnummer: " << Matrikel << " Hochschule: " 
                                                     << Hochschule << std::endl; }
     void GetInscribe() { std::cout << "Eingeschrieben am: ", inscribe.GetDate() ; };
     void BirthDay() { std::cout << "Geboren am: "; Birth.GetDate(); };
  private:  
    Date inscribe;  
    std::string Matrikel;
    std::string Hochschule;
};

int main(int argc, char **argv)
{
	
  Student Noop("Noop Nerdig", "12345678", "FRA-UAS");
  Noop.SetInscribe(1,10,2023);
  Noop.GetStudent();
  Noop.GetInscribe();
  Noop.BirthDay();
  
    
  return 0;
}

