//============================================================================
// Name        : BossUfoEnemyShip.cpp
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Boss UFO Enemy Ship class, it is derived from
//                  the UFO Enemy Ship class. This class demonstrates that
//                  as long as the class shares the same super class at some
//                  point that it can also be part of the factory.
//============================================================================

#include "../headers/BossUfoEnemyShip.h"

BossUfoEnemyShip::BossUfoEnemyShip() : UfoEnemyShip()
{
    setName("Boss Ufo Enemy Ship");
    setDamage(40.0);
}
