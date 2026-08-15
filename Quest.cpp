#include <iostream>

#include "Quest.h" 

Quest::Quest() {}

Quest::Quest(Map* location,std::string name)
{
    this->name = name;
}

Quest::~Quest()
{
}

void Quest::print()
{
    std::cout << "======== " << name << " =========\n";
}

std::string Quest::getName()
{
    return name;
}
