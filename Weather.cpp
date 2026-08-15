#include <iostream>

#include "Weather.h" 

Weather::Weather() {}

Weather::~Weather() {}

void Weather::print()
{
    std::cout << "======== " << name << " =========\n";
}

std::string Weather::getName()
{
    return name;
}
