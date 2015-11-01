//============================================================================
// Name        : EnemyShip.h
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : This is the Enemy Ship super class. All other enemy ships
//                  are at some point derived from this class.
//============================================================================

#include "../headers/EnemyShip.h"
#include <iostream>
#include <iomanip>

EnemyShip::EnemyShip():
name(""),
damage(0)
{
    // empty
}

EnemyShip::~EnemyShip()
{
    // empty
}

std::string EnemyShip::getName()
{
    return name;
}

void EnemyShip::setName(std::string newName)
{
    name = newName;
}

double EnemyShip::getDamage()
{
    return damage;
}

void EnemyShip::setDamage(double newDamage)
{
    damage = newDamage;
}

void EnemyShip::followHeroShip()
{
    std::cout << getName() << " is following the hero." << std::endl;
}

void EnemyShip::displayEnemyShip()
{
    std::cout << getName() << " is on the screen." << std::endl;
}

void EnemyShip::enemyShipShoots()
{
    // not sure why setprecision doesn't work?
    //std::cout << getName() << " attacks and does " << std::setprecision(2) << getDamage() << "." << std::endl;
    std::cout << getName() << " attacks and does " << getDamage() << "." << std::endl;
}
