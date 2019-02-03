/* 
 * File:   CrazyRandomSword.h
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on January 30, 2019, 3:14 PM
 */

#include <string>
#include <cstdlib>
#include <ctime>
#include "Weapon.h"

#ifndef CRAZY_RANDOM_SWORD_H
#define CRAZY_RANDOM_SWORD_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:


    CrazyRandomSword() : Weapon("CrazyRandomSword.cpp",
                                generateRandomInt(7,
                                                  100)) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }
    int generateRandomInt(int randFloor, int ranCeil){
        std::srand(std::time(nullptr)); // Seed the time
        int finalNum = std::rand()%(ranCeil-randFloor+1)+randFloor; // Generate the number, assign to variable.
        return finalNum;
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZY_RANDOM_SWORD_H */

