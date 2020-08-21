//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#include "validatePins.h"

std::string askPlayer(){
    std::string pin;
    std::cout << "Choose 1 pin:" << std::endl;
    std::cin >> pin;
    return pin;
}

std::string inLoop(ValidPins validPins){
    bool result;
    std::string pin;
    do{
        pin = askPlayer();
        result = validatePins(validPins, pin);
        if(!result){
            std::cout << "Choose valid pins!" << std::endl;
        }
    }while(!result);
    return pin;
}

GamePins validateResults(ValidPins validPins){
    std::string pin0, pin1, pin2, pin3;
    GamePins pinsPlayer;
    bool result;
    for(int i=0; i<pinsPlayer.length; i++){
        pinsPlayer.pins[i] = inLoop(validPins);
    }
    return pinsPlayer;
}