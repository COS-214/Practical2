#include <iostream>

#include "LocationSpecifications.h"


LocationSpecifications::LocationSpecifications() {}

LocationSpecifications::~LocationSpecifications() {}

void LocationSpecifications::add(Map *location)
{
    this->location = new location;
}
