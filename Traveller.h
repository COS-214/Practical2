#pragma once

#include "State.h"
#include "Traveller.h"

class Traveller
{
public:
    Traveller(/* args */);
    ~Traveller();
    void setState(State* state);
private:
    State* state;
};

