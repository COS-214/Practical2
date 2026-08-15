#include <iostream>

#include "Map.h"

class Locations : public Map
{
public:
    Locations();
    virtual ~Locations();
    virtual void print() = 0;
    virtual std::string getName() = 0;
};

