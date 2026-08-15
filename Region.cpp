#include <iostream>

#include "Region.h"

Region::Region() {}

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

Map* Region::getMap(int i)
{
    if (i > maps.max_size()) { return nullptr; }
    return maps.at(i);
}

void Region::print()
{
}
