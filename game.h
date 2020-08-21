//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#pragma once

#include <iostream>

struct ValidPins{
    std::string colors[6] = {"B", "G", "O", "Y", "P", "R"};
    int length = 6;
};

struct GamePins{
    std::string pins[4];
    int length = 4;
};

struct FeedBack{
    std::string feedbackPins[4];
    int length = 4;
    std::string black = "B";
    std::string white = "W";
};

/**
 * Função que roda o jogo
 */
void game();