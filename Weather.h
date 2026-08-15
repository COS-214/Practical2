#include <iostream>

#include "LocationSpecifications.h"

class Weather : public LocationSpecifications
{
public: 
    Weather();
    Weather(Map* location, std::string);
    ~Weather();
    void print() override;
    std::string getName()override ;
private:
    std::string name;
};
