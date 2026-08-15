#include <iostream>

#include "LocationSpecifications.h"

class Quest : public LocationSpecifications
{
public: 
    Quest();
    ~Quest();
    override void print();
    override string getName();
private:
    string name;
};

Quest::Quest()
{
}

Quest::~Quest()
{
}
