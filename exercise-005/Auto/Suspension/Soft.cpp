#include "Soft.h"
#include <iostream>

Soft::Soft() : Suspension("Soft") {}

void Soft::showType() const {
    std::cout << "Soft suspension" << std::endl;
}
