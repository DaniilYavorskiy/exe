#include <cstdlib>
#include <iostream>

#include "Beverage.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Espresso.h"
#include "Decaf.h"
#include "CondimentDecorator.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"


int main(int argc, char *argv[]) {

    Beverage *beverage = new HouseBlend();
    cout << beverage -> getDescription() << endl;
    
    CondimentDecorator *condimentdecorator = new Milk();
    cout << condimentdecorator->getDescription() << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
