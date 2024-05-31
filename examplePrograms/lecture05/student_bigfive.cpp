/*
 * studen_b5_1.cxx
 * 
 * Copyright 2024 Erwin Hofffmann <erwin@fehcom.de>
 * 
 */
#include <iostream>


using namespace std;

class Student {
private:
  int id;
  char* name;

public:
  Student(): id(0), name(nullptr) { };          // Default-Konstruktor
  Student(char* n, int i) {                     // Konstruktor
    this->id = i;
    this->name = new char[strlen(n) + 1];
    strcpy(this->name, n); };          
 
  ~Student() = default;                         // Destruktor  
  
  Student(const Student&) = default;            // Copy Konstruktor
  Student& operator=(const Student&) = default; // Copy Assignment

  Student(Student&&) = default;                 // Move Konstruktor
  Student& operator=(Student&&) = default;      // Move Assignment

  char* Getname() const { return name; };       // Getter
};

int main(int argc, char **argv)
{
	Student s1("Noop Nerdig",1011234);
  cout << s1.Getname() << endl;
  
  Student s2 = s1;
  cout << s2.Getname() << endl;

  Student s3;
  s3 = s1;
	cout << s3.Getname() << endl;
  
  Student s4("Hans Besserwisser",1011235);
  cout << s4.Getname() << endl;

  Student s5 = std::move(s4); // move constructor
  cout << s5.Getname() << endl;
  
  Student s6;
  s6 = std::move(s5); //move assignment
  cout << s6.Getname() << endl;
  
  return 0;
}

