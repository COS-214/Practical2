#include <iostream>

#include "LocationSpecifications.h"

class Toll : public LocationSpecifications
{
public: 
    Toll();
    Toll(Map* location, std::string);
    ~Toll();
    void print()override ;
    std::string getName()override ;
private:
    std::string name;
};

