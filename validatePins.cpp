//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#include "game.h"

bool validatePins(ValidPins validPins, std::string pin){
    for(int i=0; i< validPins.length; i++){
        if(pin == validPins.colors[i]){
            return true;
        }
    }
    return false;
}

bool validateWin(FeedBack feedBackPins){
    if ((feedBackPins.feedbackPins[0] == "B") &&
           (feedBackPins.feedbackPins[1] == "B") &&
           (feedBackPins.feedbackPins[2] == "B") &&
           (feedBackPins.feedbackPins[3] == "B")){
        std::cout<< "********* Congratulation! You won! *************" << std::endl;
        return true;
    }
}

bool validateNewGame(){
    std::string answer;
    std::cout << "Do you want play again? Y/N" << std::endl;
    std::cin >> answer;
    return (answer == "Y") || (answer == "y");
}