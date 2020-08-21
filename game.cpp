//
// Created by Sabrina e Ana Clara on 28/03/2020.
//
#include "dataOutput.h"
#include "game.h"
#include "operations.h"
#include "dataInput.h"

void game(){
    ValidPins validPins;
    bool answer;
    bool again;
    do{
        showHeader();
        ValidPins pinsCode = chooseRandomCode(validPins);
        int plays=0;
        do{
            GamePins pinsPlayer = validateResults(validPins);
            showPinsPlayer(pinsPlayer);
            FeedBack feedBackPins = checkPins(pinsCode,pinsPlayer);
            showFeedBacKPins(feedBackPins);
            answer = validateWin(feedBackPins);
            plays++;
        }while((!answer) && (plays<12));
        if(plays == 12){
            std::cout << "************** Game Over ***************" << std::endl;
        }
        showRightAnswer(pinsCode);
        again = validateNewGame();
    } while (again);
}