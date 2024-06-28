/*
 * braces.cc
 * 
 * Copyright 2024 Erwin Hoffmann <erwin@fehcom.de>
 * 
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class MyClass {
  public:
    MyClass() = default;
    MyClass(int y) : x{y} { }  // Einsatz {}: Member-Initialisierung

    auto return_vector() -> std::vector<int> {
      return {7, 8, 9};        // Einsatz {}: Return-Werte
    }

 private:
   int x{};                   // Einsatz {}: Default-Initialisierung (0 bei int)
};

int main() {
  MyClass obj{5};                                    // Nutzt {} 
  int a{1};                                          // Nutzt {}
  std::vector<int> v{1, 2, 3};                       // Nutzt {} fuer Vektoren
  std::unordered_set<int> s{4, 5, 6};                // Nutzt {} bei 'Sets'
  std::unordered_map<int, int> m{ {1, 2}, {3, 4} };  // Nutzt {} bei 'Maps'
}

