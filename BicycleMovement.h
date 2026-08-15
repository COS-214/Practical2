#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"
class Traveller;

class BicycleMovement : public State
{
public:
    BicycleMovement();
    ~BicycleMovement();
    void move(Traveller*, string) override;
    string getType() override;
    float timeIncrement(float distance) override;
private:
    string type;
};
