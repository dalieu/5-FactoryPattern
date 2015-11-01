//============================================================================
// Name        : BossUfoEnemyShip.h
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Boss UFO Enemy Ship class, it is derived from
//                  the UFO Enemy Ship class. This class demonstrates that
//                  as long as the class shares the same super class at some
//                  point that it can also be part of the factory.
//============================================================================

#ifndef _BOSS_UFO_ENEMY_SHIP_
#define _BOSS_UFO_ENEMY_SHIP_

#include "UfoEnemyShip.h"

class BossUfoEnemyShip : public UfoEnemyShip
{
public:
    BossUfoEnemyShip();
};

#endif // _BOSS_UFO_ENEMY_SHIP_
