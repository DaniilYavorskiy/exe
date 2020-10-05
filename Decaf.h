#ifndef __DECAF_H
#define __DECAF_H

#include "beverage.h"

class Decaf : public Beverage {
public:
       Decaf();
       virtual double cost();
};

#endif
