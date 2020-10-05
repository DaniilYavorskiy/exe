#ifndef __MOCHA_H
#define __MOCHA_H

#include "Mocha.h"

class Mocha: public CondimentDecorator {
public:
       Mocha();
       virtual double cost();
};

#endif
