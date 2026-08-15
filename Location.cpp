#include <iostream>

#include "Location.h"
Location::Location() {}

Location::Location(std::string name)
{
    this->name = name;
}

Location::~Location() {}

void Location::print()
{
    std::cout << "======== " << name << " =========\n";
}

std::string Location::getName()
{
    return name;
}
