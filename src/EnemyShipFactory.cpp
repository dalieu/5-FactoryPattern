//============================================================================
// Name        : EnemyShipFactory.cpp
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Enemy Ship Factory, it will create the
//                  appropriate enemy ship using the input string.
//============================================================================

#include "../headers/EnemyShipFactory.h"
#include "../headers/UfoEnemyShip.h"
#include "../headers/BossUfoEnemyShip.h"
#include "../headers/RocketEnemyShip.h"

EnemyShip* EnemyShipFactory::MakeEnemyShip(std::string inputString)
{
    EnemyShip* pNewEnemyShip = NULL;

    if(inputString == "u")
    {
        pNewEnemyShip = new UfoEnemyShip();
    }
    else if(inputString == "r")
    {
        pNewEnemyShip = new RocketEnemyShip();
    }
    else if(inputString == "b")
    {
        pNewEnemyShip = new BossUfoEnemyShip();
    }
    else
    {
        //pNewEnemyShip = new EnemyShip();
        pNewEnemyShip = NULL;
    }

    return pNewEnemyShip;
}
