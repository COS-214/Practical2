#pragma once
#include <iostream>

#include "Locations.h"

class LocationSpecifications : public Locations
{
public:
    LocationSpecifications(Map* location);
    virtual ~LocationSpecifications();
    virtual void print() = 0;
private:
    Map* location;
};
