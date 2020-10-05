#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator()
    description = "Dobavka";
}

char* CondimentDecorator::getDescription() {
      return description;
}
