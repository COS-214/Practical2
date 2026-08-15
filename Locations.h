#include <iostream>

class Locations
{
public:
    Locations();
    virtual ~Locations();
    virtual void print() = 0;
    virtual std::string getName() = 0;
};

