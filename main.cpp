#include <iostream>

int main() {
  char player1;
  char player2;
  char confirmation;
  play_Again:
    std::cout << "Player 1 :- Please enter a choice (R/P/S): \n";
  std::cin >> player1;
  std::cout << "Player 2 :- Please enter a choice (R/P/S): \n";
  std::cin >> player2;
  //std::cout << "Player1's choice is: " << player1;
  if(player1 == player2) {
    std::cout << "The game is a Draw :|\n";
    goto endline;
  }
  else if((player1 == 'R' && player2 == 'S') ||
         (player1 == 'P' && player2 == 'R') ||
         (player1 == 'S' && player2 == 'P') || (player1 == 'F')){
    std::cout << "This round goes to Player1 :) \n";
    goto endline;
  }
  else if((player2 == 'R' && player1 == 'S') ||
         (player2 == 'P' && player1 == 'R') ||
         (player2 == 'S' && player1 == 'P') || (player2 == 'F')){
    std::cout << "This round goes to Player2 :) \n";
    goto endline;
  }
  else{
    std::cout << "You've entered a wrong choice :(\n Choices must be from (R/P/S)\n Player1's choice was " << player1 << "\n Player2's choice was "<< player2 << std::endl;
    endline:
      std::cout << "\n Press 'Y' to play again & 'N' to end" << std::endl;
    std::cin >> confirmation;
    if(confirmation == 'Y'){
      goto play_Again;
    }
    else{  
      std::cout << "Thanks for playing ;)" << std::endl;
    }
  }
}