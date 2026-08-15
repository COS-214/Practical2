#include <iostream>

#include "Weather.h" 

Weather::Weather(Map* location)
    : LocationSpecifications(location) {
    this->name = "Weather";
}

Weather::~Weather() {}

void Weather::print()
{
    std::cout << "======== " << name << " =========\n";
}

