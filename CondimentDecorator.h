#ifndef __CONDIMENTDECORATOR_H
#define __CONDIMENTDECORATOR_H

class CondimentDecorator {
protected:
       char *description;
public:
       CondimentDecorator();
       virtual char* getDescription();
       virtual double cost() =0;
};

#endif
