#include "Electric.h"
#include <iostream>

Electric::Electric() : Engine("Electric") {}

void Electric::showType() const {
    std::cout << "Electric engine" << std::endl;
}
