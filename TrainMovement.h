#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "AirMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"

class Traveller;

class TrainMovement : public State
{
public:
    TrainMovement(/* args */);
    ~TrainMovement();
    void move(Traveller*, string);
    string getType();
    float timeIncrement(float distance);
private:
    string type;
};
