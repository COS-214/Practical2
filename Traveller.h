#pragma once

#include "State.h"
#include <string>

class Traveller
{
public:
    Traveller();
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

