#ifndef __MILK_H
#define __MILK_H

#include "CondimentDecorator.h"

class Milk :public CondimentDecorator {
public:
       Milk();
       virtual double cost();
};

#endif
