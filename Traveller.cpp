#include <iostream>
#include <string>

#include "State.h"
#include "Traveller.h"

Traveller::Traveller() {}

Traveller::~Traveller() {
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
