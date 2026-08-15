#include <iostream>

#include "Quest.h" 

Quest::Quest()
{
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
