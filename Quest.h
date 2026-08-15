#include <iostream>

#include "LocationSpecifications.h"

class Quest : public LocationSpecifications
{
public: 
    Quest(Map*);
    ~Quest();
    void print() override ;
private:
    std::string name;
};
