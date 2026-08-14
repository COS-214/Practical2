#include <iostream>
#include <string>

#include "State.h"
#include "Traveller.h"

Traveller::Traveller() {
    state = nullptr;
    distance = 0;
    TotalTimeTravelled = 0;
}

Traveller::~Traveller() {
    delete state;
    state = nullptr;
}

void Traveller::change(string newState)
{
    state->move(this,  newState);
}

void Traveller::setState(State *state)
{
    if (this->state != nullptr)
    {
        incrementTravelTime();
        delete this->state;
    }
    this->state = state;
}

float Traveller::getDistance()
{
    return distance;
}

void Traveller::setDistance(float dist)
{
    this->distance = dist;
}

float Traveller::getTotalTimeTravelled()
{
    return TotalTimeTravelled;
}

State *Traveller::getState()
{
    return state;
}

void Traveller::incrementTravelTime()
{
    TotalTimeTravelled += this->state->timeIncrement(distance);
}

void Traveller::incrementDistance()
{
    distance++;
}
