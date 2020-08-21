//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#pragma once

#include <iostream>
#include "game.h"

/**
 *
 * @param validPins vetor com as cores dos pinos válidas
 * @param pin pino escolhido pelo jogador
 * @return true se a cor do pino escolhido é igual a uma das cores dos pinos válidos e false se não é
 */
bool validatePins(ValidPins validPins, std::string pin);

/**
 * Valida se pinos escolhidos pelo jogador são todos iguais ao código secreto
 * @param feedBackPins struct de pinos do feedback
 * @return true se for igual
 */
bool validateWin(FeedBack feedBackPins);

/**
 * Pegunta para o jogador se quer jogar um jogo novo
 * @return true se a resposta for sim
 */
bool validateNewGame();