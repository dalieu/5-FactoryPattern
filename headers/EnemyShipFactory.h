//============================================================================
// Name        : EnemyShipFactory.h
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Enemy Ship Factory, it will create the
//                  appropriate enemy ship using the input string.
//============================================================================

#ifndef _ENEMY_SHIP_FACTORY_
#define _ENEMY_SHIP_FACTORY_

#include "EnemyShip.h"
#include <string>

class EnemyShipFactory
{
public:
    static EnemyShip* MakeEnemyShip(std::string inputString);
};

#endif // _ENEMY_SHIP_FACTORY_
