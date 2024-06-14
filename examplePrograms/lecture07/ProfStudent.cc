/*
 * ProfStudent.cc
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */


#include <iostream>

class Person
{
  public:
    Person(std::string name) { meinname = name; }
    void puts() { std::cout << "Mein Name ist: " << meinname << ".\n"; }
  protected:
    std::string meinname;
};

class Student : public Person
{
  public:
    Student(const char* n, int a) : Person(n), alter(a) {};
    void puts() { std::cout << "Ich bin Student " << meinname <<  " und mein Alter ist: " << alter << ".\n"; }
  private:
    int alter;
};

class Professor : public Person
{
  public:
    Professor(const char* n, int p) : Person(n), pubs(p) {};
    void puts() { std::cout << "Ich bin Professor " << meinname <<  " und meine Anzahl Publikationen ist: " << pubs << ".\n"; }
  private:
    int pubs;
};


int main(int argc, char **argv)
{
  Person* p;
  Person x("Bob");
  p = &x;
  p -> puts();
  Student y("Noop Nerdig", 19);
  p = &y;
  p -> puts();
  Professor z("Erwin Hoffmann", 10);
  p = &z;
  p -> puts();
	
  return 0;
}

