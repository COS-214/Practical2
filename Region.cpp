#include <iostream>

#include "Region.h"

Region::Region() {}

Region::~Region()
{
  for (auto it = maps.begin(); it != maps.end(); ++it){
    delete *it;
  }
}

void Region::add(Map *child)
{
    if (child == nullptr) { return; }

    maps.push_back(child);
}

Map* Region::getMap(int i)
{
    if (i >= static_cast<int>(maps.size()) || i < 0) { return nullptr; }
    return maps.at(i);
}

void Region::setMap(int index, Map* newChild)
{
    if (index < 0 || index >= static_cast<int>(maps.size()) || newChild == nullptr) { return; }
    maps.at(index) = newChild; 
}

int Region::size()
{
    return static_cast<int>(maps.size());
}

void Region::print()
{
    std::cout << "========== Region ==========\n";

    for (auto it = maps.begin(); it != maps.end(); ++it)
    {
        if (*it != nullptr)
        {
            (*it)->print();
        }
    }

    std::cout << "======== End Region =========\n";
}
