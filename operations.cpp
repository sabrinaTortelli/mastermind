//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#include "game.h"
#include <cstdlib>
#include <ctime>

ValidPins chooseRandomCode(ValidPins validPins){
    ValidPins pins;
    srand(time(NULL));
    for(int i=0; i<4; i++){
        int x = rand() % 6;
        pins.colors[i] = validPins.colors[x];
    }
    return pins;
}

FeedBack checkPins(ValidPins pinsCode, GamePins pinsPlayer){
    FeedBack feedBackArray;
    feedBackArray.length=0;
    bool codeUsed[4];
    bool guessUsed[4];
    for (int i = 0; i < pinsPlayer.length; i++) {
        if (pinsCode.colors[i] == pinsPlayer.pins[i]) {
            codeUsed[i] = guessUsed[i] = true;
            feedBackArray.feedbackPins[feedBackArray.length++] = feedBackArray.black;
        }
    }
    for (int i = 0; i < pinsPlayer.length; i++) {
        for (int j = 0; j < pinsPlayer.length; j++) {
            if (!codeUsed[i] && !guessUsed[j] && pinsCode.colors[i] == pinsPlayer.pins[j]) {
                feedBackArray.feedbackPins[feedBackArray.length++] = feedBackArray.white;
                codeUsed[i] = guessUsed[j] = true;
                break;
            }
        }
    }
    return feedBackArray;
}
