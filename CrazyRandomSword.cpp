/* 
 * File:   CrazyRandomSword.cpp
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on January 30, 2019, 3:14 PM
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor) {
    double damage;

    damage = hitPoints - (0.8 * (generateRandomInt(2, static_cast<int>(armor / 3))));
    if (damage < 0) {
        return 0;
    }
    return damage;
}
