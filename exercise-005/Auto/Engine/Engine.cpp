#include "Engine.h"
#include <iostream>

Engine::Engine(const std::string& type) : type(type) {}

Engine::~Engine() {}

void Engine::showType() const {
    std::cout << "Engine: " << type << std::endl;
}
