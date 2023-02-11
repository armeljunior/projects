#include <iostream>


//Function declaration
 void Colombian();
// void Brazilian();
// void Peruvian();

int main() {
  
  Colombian();
  return 0;
  
}

//Function definition
void Colombian() {
  int columbiannumber,brazilianreais,peruviansoles;

  std::cout << "Enter number of Colombian Pesos:";
  std::cin >> columbiannumber;

  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> brazilianreais;

    std::cout << "Enter number of Peruvian Soles:";
  std::cin >> peruviansoles;


 double converteddollars = (double)columbiannumber * 0.00032 +
   (double)brazilianreais * 0.27
  +  (double)peruviansoles * 0.3;

  std::cout << "US Dollars = $" << converteddollars << "\n";

if (!std::cin) {
    std::cerr << "Error: Invalid input." << std::endl;
    return;
  }
//return converteddollars;

}
//Brazilian() {}
//Peruvian() {}