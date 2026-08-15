#include <iostream>

#include "LocationSpecifications.h"

class Toll : public LocationSpecifications
{
public: 
    Toll(Map* location);
    ~Toll();
    void print()override ;
private:
    std::string name;
};

