/* 
 * File:   SimpleHammer.h
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on January 30, 2019, 3:14 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLE_HAMMER_H
#define SIMPLE_HAMMER_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer",
                            25.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLE_HAMMER_H */

