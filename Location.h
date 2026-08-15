#include <iostream>

#include "Locations.h"

class Location : public Locations
{
public:
    Location();
    Location(std::string);
    ~Location();
    void print() override;
    std::string getName() override;
private:
    std::string name;
};

