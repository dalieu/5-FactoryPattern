//============================================================================
// Name        : RocketEnemyShip.cpp
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : Rocket Enemy Ship derived from Enemy Ship class.
//============================================================================

#include "../headers/RocketEnemyShip.h"

RocketEnemyShip::RocketEnemyShip() : EnemyShip()
{
    setName("Rocket Enemy Ship");
    setDamage(10.0);
}
