#include <iostream>

#include "Weather.h" 

Weather::Weather() {}

Weather::Weather(Map* location, std::string name)
{
    
    this->name = name;
}

Weather::~Weather() {}

void Weather::print()
{
    std::cout << "======== " << name << " =========\n";
}

std::string Weather::getName()
{
    return name;
}
