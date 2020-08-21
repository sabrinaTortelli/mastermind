//
// Created by Sabrina e Ana Clara on 28/03/2020.
//

#pragma once

#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * Função que escolhe o código secreto
 * @param validPins cores dos pinos válidos
 * @return pinos escolhidos aleatoriamente
 */
ValidPins chooseRandomCode(ValidPins validPins);

/**
 * Checa se pinos do jogador são iguais ao código secreto
 * @param pinsCode pinos do código secreto
 * @param pinsPlayer pinos do jogador
 * @return struct com o feedback
 */
FeedBack checkPins(ValidPins pinsCode, GamePins pinsPlayer);
