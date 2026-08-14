#pragma once
#include <string>

#include "State.h"
#include "Traveller.h"

class State;

class Traveller
{
public:
    Traveller(/* args */);
    ~Traveller();
    void change(std::string);
    void setState(State* state);
    float getDistance();
    void setDistance(float dist);
    float getTotalTimeTravelled();
    State* getState();
    void incrementTravelTime();
    void incrementDistance();
private:
    State* state;
    float distance;
    float TotalTimeTravelled; 
};

