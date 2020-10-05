#ifndef __ESPRESSO_H
#define __ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage {
public:
       Espresso();
       virtual double cost();
};

#endif
