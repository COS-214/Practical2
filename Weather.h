#include <iostream>

#include "LocationSpecifications.h"

class Weather : public LocationSpecifications
{
public: 
    Weather();
    ~Weather();
    void print() override;
    std::string getName()override ;
private:
    std::string name;
};
