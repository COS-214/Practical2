#pragma once
#include <string>

#include "Traveller.h"

class Traveller;


using namespace std;

class State
{
public:
    State() {}
    virtual ~State() {}
    virtual void move(Traveller*, string) = 0;
    virtual string getType() = 0;
    virtual float timeIncrement(float distance) = 0;
};

