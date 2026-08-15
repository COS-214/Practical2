#include <iostream>

#include "LocationSpecifications.h"

class Quest : public LocationSpecifications
{
public: 
    Quest();
    ~Quest();
    void print() override ;
    std::string getName() override ;
private:
    std::string name;
};
