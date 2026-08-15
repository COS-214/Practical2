#include <iostream>

#include "Locations.h"

class LocationSpecifications : public Locations
{
public:
    LocationSpecifications();
    virtual ~LocationSpecifications();
    virtual void print() = 0;
    virtual std::string getName() = 0;
private:
    Locations* location;
};
