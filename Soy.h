#ifndef __SOY_H
#define __SOY_H

#include "Soy.h"

class Soy: public CondimentDecorator {
public:
       Soy();
       virtual double cost();
};

#endif
