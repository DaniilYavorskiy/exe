#ifndef __WHIP_H
#define __WHIP_H

#include "Whip.h"

class Whip: public CondimentDecorator {
public:
       Whip();
       virtual double cost();
};

#endif
