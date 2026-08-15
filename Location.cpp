#include <iostream>

#include "Location.h"
Location::Location() {}

Location::~Location() {}

void Location::print()
{
    std::cout << "======== " << name << " =========\n";
}

std::string Location::getName()
{
    return name;
}
