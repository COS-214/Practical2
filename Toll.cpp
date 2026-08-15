#include <iostream>

#include "Toll.h"

Toll::Toll(Map* location)
    : LocationSpecifications(location) {
    this->name = "Toll";
}

Toll::~Toll() {}

void Toll::print()
{
    std::cout << "============= " << this->name << " ==================\n";
}
