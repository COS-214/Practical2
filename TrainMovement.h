#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "AirMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"

class TrainMovement : public State
{
public:
    TrainMovement(/* args */);
    ~TrainMovement();
    void move(Traveller*, string) override;
    string getType() override;
    float timeIncrement() override;
private:
    string type;
};
