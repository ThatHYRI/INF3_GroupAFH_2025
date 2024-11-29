#include "Auto.h"
#include <iostream>

Auto::Auto(const std::string& name) : name(name) {}

Auto::~Auto() {}

void Auto::displayInfo() const {
    std::cout << "Auto: " << name << std::endl;
}
