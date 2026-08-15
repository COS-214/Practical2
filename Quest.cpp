#include <iostream>

#include "Quest.h" 

Quest::Quest(Map* location)
    : LocationSpecifications(location) {
    this->name = "Quest";
}

Quest::~Quest() {}

void Quest::print()
{
    std::cout << "======== " << name << " =========\n";
}