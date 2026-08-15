#pragma once
#include <iostream>

#include "Locations.h"

class Location : public Locations
{
public:
    Location();
    ~Location();
    void print() override;
};

