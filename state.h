#pragma once
#include <string>

#include "Traveller.h"


using namespace std;

class State
{
private:
    /* data */
public:
    State(/* args */) {}
    virtual ~State() {}
    virtual void move(Traveller*, string) = 0;
    virtual string getType() = 0;
    virtual float timeIncrement() = 0;
};

