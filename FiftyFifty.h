/* 
 * File:   FiftyFifty.h
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on January 30, 2019, 3:14 PM
 */

#include <string>
#include "Weapon.h"

#ifndef FIFTY_FIFTY_H
#define FIFTY_FIFTY_H

/**
 * If the target is has less than 50 armor, deal 50 damage
 * Else, deal 50% of armor as damage
 */
class FiftyFifty : public Weapon {
public:

    FiftyFifty() : Weapon("FiftyFifty",
                            50) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~FiftyFifty() {};

    virtual double hit(double armor);

};

#endif /* FIFTY_FIFTY_H */

