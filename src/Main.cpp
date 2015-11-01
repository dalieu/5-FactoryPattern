//============================================================================
// Name        : FactoryPattern.cpp
// Author      : David Lieu
// Version     : 1.0
// Copyright   : Copyright 2015 David Lieu
// Description : Factory Pattern - allows you to create objects without
//                  specifying the exact class of object that will be created.
//
// When to use a factory pattern?
//      - When you want a method to return one of several possible classes
//          that share a common super class.
//      - When you don't know what class you need until runtime, however all
//          classes need to at some point inherit from the same super class.
//
// Key feature?
//      - Encapsulate object creation, classes chosen at runtime.
//
// Source URL: https://www.youtube.com/watch?v=ub0DXaeV6hA
//============================================================================

#include "../headers/EnemyShip.h"
#include "../headers/UfoEnemyShip.h"
#include "../headers/RocketEnemyShip.h"
#include "../headers/EnemyShipFactory.h"
#include <iostream>


 void doStuffEnemy(EnemyShip* pEnemyShip)
{
     pEnemyShip->displayEnemyShip();
     pEnemyShip->followHeroShip();
     pEnemyShip->enemyShipShoots();
}

void askEnemyShipType()
{
    std::cout << "What type of enemy ship (u / r / b)?" << std::endl;
}

void warningEnemyShipType()
{
    std::cout << "Please enter one of the following (u / r / b)!" << std::endl;
}

int main() {
    EnemyShip* pEnemyShip = NULL;

    std::string line = "";
    askEnemyShipType();
    while(std::getline(std::cin, line))
    {
        if(line.empty())
        {
            std::cout << "Game Over!." << std::endl;
            break;
        }
        else
        {
            pEnemyShip = EnemyShipFactory::MakeEnemyShip(line);
            if(pEnemyShip != NULL)
            {
                doStuffEnemy(pEnemyShip);
                std::cout << std::endl;
                askEnemyShipType();
            }
            else
            {
                warningEnemyShipType();
            }

        }
    }

	return 0;
}
