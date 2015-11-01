//============================================================================
// Name        : EnemyShip.h
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Enemy Ship super class. All other enemy ships
//                  are at some point derived from this class.
//============================================================================

#ifndef _ENEMY_SHIP_
#define _ENEMY_SHIP_

#include <string>

class EnemyShip
{
public:
    EnemyShip();
    ~EnemyShip();

    std::string getName();
    void setName(std::string newName);

    double getDamage();
    void setDamage(double newDamage);

    void followHeroShip();
    void displayEnemyShip();
    void enemyShipShoots();

private:
    std::string name;
    double damage;
};

#endif // _ENEMY_SHIP_
