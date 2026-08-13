#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "AirMovement.h"
#include "CarMovement.h"
#include "TrainMovement.h"

class FootMovement : public State
{
public:
    FootMovement(/* add */);
    ~FootMovement();
    void move(Traveller*, string) override;
    string getType() override;
    float timeIncrement() override;
private:
    string type;
};