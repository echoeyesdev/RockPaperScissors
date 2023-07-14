// Beginners project

#include <iostream>
#include <cmath>

int main(){ 
    
    std::string computerList[] = {"rock", "paper", "scissors"};
    int size = sizeof(computerList)/sizeof(computerList[0]);
 
    srand(time(NULL));
    int index = (rand() % size);
    
    std::string computerPlay = computerList[index];
    
    std::string userPlays;
    
    while(true){
        std::cout << "the computer played, Now your turn" << std::endl;
        std::cout << "your turn  to play: ";
        std::cin >> userPlays;
        
        if(userPlays == computerPlay){
            std::cout << "tie. retry" << std::endl;
        }
        else if(userPlays == "rock" && computerPlay == "paper"){
            std::cout << "computer wins. paper covers the rock" << std::endl;
            break;
        }
        else if(userPlays == "rock" && computerPlay == "scissors"){
            std::cout << "you win. rock smashes the scissor" << std::endl;
            break;
        }
        else if(userPlays == "paper" && computerPlay == "rock"){
            std::cout << "you win. paper covers the rock" << std::endl;
            break;
        }
        else if(userPlays == "paper" && computerPlay == "scissors"){
            std::cout << "computer wins. scissors cuts the paper" << std::endl;
            break;
        }
        else if(userPlays == "scissors" and computerPlay == "rock"){
            std::cout << "computer wins. rock smashes the scissors" << std::endl;
            break;
        }else if(userPlays == "scissors" && computerPlay == "paper"){
            std::cout << "you win. scissors cuts the paper" << std::endl;
            break;
        }
        else{
            std::cout << "invalid play" << std::endl;
            std::cout << "play again..." << std::endl;
        }
    }
    
   
    return 0;
}
