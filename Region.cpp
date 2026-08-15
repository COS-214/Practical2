#include <iostream>

#include "Region.h"

Region::Region()
{

}

Region::~Region()
{
  for (auto it = maps.begin(); it != maps.end(); ++it)
    delete *it;
}

void Region::add(Map *child)
{
    if (child == nullptr) { return; }

    maps.push_back(child);
}

void Region::remove(std::string name)
{
    for (auto it = maps.begin(); it != maps.end(); ) {
        if ((*it)->getName() == name) {
            it = maps.erase(it); 
        } else {
            ++it; 
        }
    }
}

Map* Region::getMap(int i)
{
    if (i > maps.max_size()) { return nullptr; }
    return maps.at(i);
}

void Region::print()
{
}