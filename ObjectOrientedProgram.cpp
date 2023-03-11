#include <iostream>
 
// Base class
class humans {
public:
  std::string gender;
  int age;
};
 
// Derived class
class Pirates: public humans  {
public:
  std::string devilfruit;
 
  void sound() {
    std::cout << "Kaizuko No Orewa naru\n";
  }
};
 
int main() {
  Pirates bosses;
  bosses.gender = "male";
  bosses.age = 38;
  bosses.devilfruit = "gumo gumo no mi";
 
  bosses.sound(); // Outputs: Woof
 
  return 0;
}