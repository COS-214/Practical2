#include <iostream>

#include "Traveller.h"

Traveller::Traveller(/* args */)
{
}

Traveller::~Traveller()
{
}

void Traveller::setState(State *state)
{
    if (this->state != nullptr)
        delete this->state;
    this->state = state;
}
