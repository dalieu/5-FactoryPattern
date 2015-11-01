//============================================================================
// Name        : UfoEnemyShip.cpp
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : UFO Enemy Ship derived from Enemy Ship class.
//============================================================================

#include "../headers/UfoEnemyShip.h"

UfoEnemyShip::UfoEnemyShip() : EnemyShip()
{
    setName("Ufo Enemy Ship");
    setDamage(20.0);
}
