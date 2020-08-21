//
// Created by Sabrina on 28/03/2020.
//

#include "dataOutput.h"
#include "game.h"

void showHeader(){
    std::cout << "*************************** Welcome to Mastermind Game *****************************"<< std::endl;
    std::cout << "Colors available:" << std::endl;
    std::cout << "B - blue" << std::endl;
    std::cout << "G - green" << std::endl;
    std::cout << "O - orange" << std::endl;
    std::cout << "Y - yellow" << std::endl;
    std::cout << "P - purple" << std::endl;
    std::cout << "R - red" << std::endl;
    std::cout << "Feedback:" << std::endl;
    std::cout << "B - If is the same color in the same position" << std::endl;
    std::cout << "W - If is the same color in different position" << std::endl;
    std::cout << "Empty - Wrong pin" << std::endl;
}

void showPinsPlayer(GamePins pinsPlayer){
    std::cout << "Player pins:" << std::endl;
    for(int i=0; i<4; i++){
        std::cout << "[" << pinsPlayer.pins[i] << "]";
    } std::cout << std::endl;
}

void showFeedBacKPins(FeedBack feedBackPins){
    std::cout << "Result of the attempt:" << std::endl;
    for(int i=0; i<4; i++){
        std::cout << "[" << feedBackPins.feedbackPins[i] << "]";
    } std::cout << std::endl;
}

void showRightAnswer(ValidPins pinsCode){
    std::cout << "Secret code:" << std::endl;
    for(int i=0; i<4; i++){
        std::cout << "[" << pinsCode.colors[i] << "]";
    } std::cout << std::endl;
}