//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#pragma once

#include <iostream>
#include "game.h"

/**
 * Mostra cores válidas para os pinos e o feedback.
 */
void showHeader();

/**
 * Mostra cores de pinos escolhidos pelo jogador
 * @param pinsPlayer struct de pinos do jogador
 */
void showPinsPlayer(GamePins pinsPlayer);

/**
 * Mostra feedback a cada jogada
 * @param feedBackPins struct do feedback do jogo
 */
void showFeedBacKPins(FeedBack feedBackPins);

/**
 * Mostra a resposta do jogo
 * @param pinsCode pinos escolhidos aleatoriamente
 */
void showRightAnswer(ValidPins pinsCode);