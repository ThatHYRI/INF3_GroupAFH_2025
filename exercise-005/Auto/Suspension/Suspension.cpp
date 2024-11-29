#include "Suspension.h"
#include <iostream>

Suspension::Suspension(const std::string& type) : type(type) {}

Suspension::~Suspension() {}

void Suspension::showType() const {
    std::cout << "Suspension: " << type << std::endl;
}
