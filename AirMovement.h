#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"
class Traveller;

class AirMovement : public State
{
public:
    AirMovement();
    ~AirMovement();
    void move(Traveller*, string) override;
    string getType() override;
    float timeIncrement(float distance) override;
private:
    string type;
};

