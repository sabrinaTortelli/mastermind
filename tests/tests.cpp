//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#include "tests.h"
#include "../dataInput.h"
#include "../dataOutput.h"
#include "../operations.h"
#include "../validatePins.h"

void testShowHeader(){
    showHeader();
}

void testChooseRandomCode(){
    ValidPins validPins;
    ValidPins pinsCode = chooseRandomCode(validPins);
    showRightAnswer(pinsCode);
}

void testValidateResults(){
    ValidPins validPins;
    GamePins pinsPlayer = validateResults(validPins);
    showPinsPlayer(pinsPlayer);
}

void testFeedbackPins(){
    ValidPins validPins;
    ValidPins pinsCode = chooseRandomCode(validPins);
    GamePins pinsPlayer = validateResults(validPins);
    FeedBack feedBackPins = checkPins(pinsCode,pinsPlayer);
    showFeedBacKPins(feedBackPins);
    showRightAnswer(pinsCode);
    bool answer = validateWin(feedBackPins);
    std::cout << answer << std::endl;
}