/* 
 * File:   FiftyFifty.cpp
 *
 * Author: Javier <jts16@my.fsu.edu>
 * Created on Janurary 30, 2019, 3:14 PM
 */

#include "FiftyFifty.h"

double FiftyFifty::hit(double armor) {
    double damage;
    if (armor < 50)
        damage = hitPoints;
    else
        damage = (armor * 0.5);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
