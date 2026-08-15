#include <iostream>

#include "LocationSpecifications.h"

class Weather : public LocationSpecifications
{
public: 
    Weather(Map* location);
    ~Weather();
    void print() override;
private:
    std::string name;
};
