#include <iostream>
#include <stdlib.h>
//A simple rock paper scissor game


int main() {

srand(time(NULL));
int computer = rand() % 3 + 1; //gives an output between 1 and 2
int user = 0;

std::cout << "--------------------------\n"; std::cout << "Rock Paper Scissors! \n"; std::cout << "--------------------------\n";

std::cout << "1.🪨\n"; std::cout << "2.📝 \n"; std::cout << "3.✂️ \n"; std::cout <<"Pick Quickly: rock, paper or scissors \n";

std::cin >> user;

   switch(user) {
        case 1:
            if (user == computer){
              std::cout << "You both drew rock. It's a draw.\n";
            }else if(computer == 3){
              std::cout << "you lose try again \n";
            }else{
               std::cout << "You Win\n";
            }
               std::cout <<"\n\n\n" << std::endl;
            break;
        case 2:
            if (user == computer){
              std::cout << "You both drew paper. It's a draw. \n";
            }else if(computer == 1){
              std::cout << "Computer drew rock you win\n";
            }else{
               std::cout << "Computer drew scissors you lose\n";
            }
                std::cout <<"\n\n\n" << std::endl;
            break;

        case 3:
              std::cout << "scissors" << std::endl;
              if (user == computer){
              std::cout << "You both drew scissors. It's a draw.\n";
            }else if(computer == 2){
              std::cout << "Computer drew paper You Win\n";
            }else{
               std::cout << "You lose try again\n";
            }
               std::cout <<"\n\n\n" << std::endl;
            break;
        default:
            std::cout << "Please pick a number between 1 and 3" << std::endl;
            return 0;
            break;
    }
    return 0;
} //g++ rock_paper_scissors.cpp; ./a.out 