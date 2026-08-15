#include <iostream>

#include "Toll.h"

Toll::Toll()
{
}

Toll::Toll(Map* location, std::string name)
{
    this->name = name;
}

Toll::~Toll()
{
}

void Toll::print()
{
}

std::string Toll::getName()
{
    return std::string();
}
