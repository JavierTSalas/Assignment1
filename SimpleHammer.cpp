/* 
 * File:   SimpleHammer.cpp
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on Janurary 30, 2019, 3:14 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if (armor < 30)
        damage = hitPoints;
    else
        damage = hitPoints - (armor * 0.8);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
