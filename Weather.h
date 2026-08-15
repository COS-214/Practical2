#include <iostream>

#include "LocationSpecifications.h"

class Weather : public LocationSpecifications
{
public: 
    Weather();
    ~Weather();
    override void print();
    override string getName();
private:
    string name;
};

Weather::Weather()
{
}

Weather::~Weather()
{
}
